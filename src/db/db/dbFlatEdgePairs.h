
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#ifndef HDR_dbFlatEdgePairs
#define HDR_dbFlatEdgePairs

#include "dbCommon.h"

#include "dbAsIfFlatEdgePairs.h"
#include "dbShapes.h"
#include "dbGenericShapeIterator.h"
#include "tlCopyOnWrite.h"

namespace db {

/**
 *  @brief An iterator delegate for the flat edge pair set
 */
typedef generic_shapes_iterator_delegate<db::EdgePair> FlatEdgePairsIterator;

/**
 *  @brief The delegate for the actual edge pair set implementation
 */
class DB_PUBLIC FlatEdgePairs
  : public AsIfFlatEdgePairs
{
public:
  typedef db::layer<db::EdgePair, db::unstable_layer_tag> edge_pair_layer_type;
  typedef edge_pair_layer_type::iterator edge_pair_iterator_type;

  FlatEdgePairs ();
  FlatEdgePairs (const db::Shapes &edges);

  FlatEdgePairs (const FlatEdgePairs &other);

  virtual ~FlatEdgePairs ();

  EdgePairsDelegate *clone () const
  {
    return new FlatEdgePairs (*this);
  }

  void reserve (size_t);

  virtual EdgePairsIteratorDelegate *begin () const;
  virtual std::pair<db::RecursiveShapeIterator, db::ICplxTrans> begin_iter () const;

  virtual bool empty () const;
  virtual size_t count () const;
  virtual size_t hier_count () const;

  virtual EdgePairsDelegate *filter_in_place (const EdgePairFilterBase &filter);

  virtual EdgePairsDelegate *add_in_place (const EdgePairs &other);
  virtual EdgePairsDelegate *add (const EdgePairs &other) const;

  virtual const db::EdgePair *nth (size_t n) const;
  virtual bool has_valid_edge_pairs () const;

  virtual const db::RecursiveShapeIterator *iter () const;

  virtual void insert_into (Layout *layout, db::cell_index_type into_cell, unsigned int into_layer) const;
  virtual void insert_into_as_polygons (Layout *layout, db::cell_index_type into_cell, unsigned int into_layer, db::Coord enl) const;

  void insert (const db::EdgePair &edge_pair);
  void insert (const db::Shape &shape);

  template <class T>
  void insert (const db::Shape &shape, const T &trans)
  {
    if (shape.is_edge_pair ()) {

      db::EdgePair ep;
      shape.edge_pair (ep);
      ep.transform (trans);
      insert (ep);

    }
  }

  template <class Iter>
  void insert_seq (const Iter &seq)
  {
    for (Iter i = seq; ! i.at_end (); ++i) {
      insert (*i);
    }
  }

  template <class Trans>
  void transform (const Trans &trans)
  {
    if (! trans.is_unity ()) {
      db::Shapes &ep = *mp_edge_pairs;
      for (edge_pair_iterator_type p = ep.template get_layer<db::EdgePair, db::unstable_layer_tag> ().begin (); p != ep.template get_layer<db::EdgePair, db::unstable_layer_tag> ().end (); ++p) {
        ep.get_layer<db::EdgePair, db::unstable_layer_tag> ().replace (p, p->transformed (trans));
      }
      invalidate_cache ();
    }
  }

  db::Shapes &raw_edge_pairs () { return *mp_edge_pairs; }
  const db::Shapes &raw_edge_pairs () const { return *mp_edge_pairs; }

protected:
  virtual Box compute_bbox () const;
  void invalidate_cache ();

private:
  friend class AsIfFlatEdgePairs;

  FlatEdgePairs &operator= (const FlatEdgePairs &other);

  mutable tl::copy_on_write_ptr<db::Shapes> mp_edge_pairs;
};

}

#endif

