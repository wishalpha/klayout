
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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

/**
*  @file gsiDeclQHideEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHideEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHideEvent

namespace gsi
{

static gsi::Methods methods_QHideEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QHideEvent> decl_QHideEvent (qtdecl_QEvent (), "QHideEvent_Native",
  methods_QHideEvent (),
  "@hide\n@alias QHideEvent");

GSIQT_PUBLIC gsi::Class<QHideEvent> &qtdecl_QHideEvent () { return decl_QHideEvent; }

}


class QHideEvent_Adaptor : public QHideEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHideEvent_Adaptor();

  //  [adaptor ctor] QHideEvent::QHideEvent()
  QHideEvent_Adaptor() : QHideEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QHideEvent_Adaptor::~QHideEvent_Adaptor() { }

//  Constructor QHideEvent::QHideEvent() (adaptor class)

static void _init_ctor_QHideEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QHideEvent_Adaptor> ();
}

static void _call_ctor_QHideEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHideEvent_Adaptor *> (new QHideEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QHideEvent> &qtdecl_QHideEvent ();

static gsi::Methods methods_QHideEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHideEvent::QHideEvent()\nThis method creates an object of class QHideEvent.", &_init_ctor_QHideEvent_Adaptor_0, &_call_ctor_QHideEvent_Adaptor_0);
  return methods;
}

gsi::Class<QHideEvent_Adaptor> decl_QHideEvent_Adaptor (qtdecl_QHideEvent (), "QHideEvent",
  methods_QHideEvent_Adaptor (),
  "@qt\n@brief Binding of QHideEvent");

}

