
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
*  @file gsiDeclQJsonArray_Const_iterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonArray>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonValuePtr>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonArray::const_iterator

//  Constructor QJsonArray::const_iterator::const_iterator()


static void _init_ctor_QJsonArray_Const_iterator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonArray::const_iterator> ();
}

static void _call_ctor_QJsonArray_Const_iterator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator *> (new QJsonArray::const_iterator ());
}


//  Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray *array, int index)


static void _init_ctor_QJsonArray_Const_iterator_2978 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<const QJsonArray * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("index");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QJsonArray::const_iterator> ();
}

static void _call_ctor_QJsonArray_Const_iterator_2978 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray *arg1 = args.read<const QJsonArray * > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator *> (new QJsonArray::const_iterator (arg1, arg2));
}


//  Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray::const_iterator &o)


static void _init_ctor_QJsonArray_Const_iterator_3951 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return_new<QJsonArray::const_iterator> ();
}

static void _call_ctor_QJsonArray_Const_iterator_3951 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<QJsonArray::const_iterator *> (new QJsonArray::const_iterator (arg1));
}


//  Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray::iterator &o)


static void _init_ctor_QJsonArray_Const_iterator_3305 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return_new<QJsonArray::const_iterator> ();
}

static void _call_ctor_QJsonArray_Const_iterator_3305 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<QJsonArray::const_iterator *> (new QJsonArray::const_iterator (arg1));
}


// bool QJsonArray::const_iterator::operator!=(const QJsonArray::const_iterator &o)


static void _init_f_operator_excl__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator!= (arg1));
}


// QJsonValue QJsonArray::const_iterator::operator*()


static void _init_f_operator_star__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValue > ();
}

static void _call_f_operator_star__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray::const_iterator *)cls)->operator* ());
}


// QJsonArray::const_iterator QJsonArray::const_iterator::operator+(int j)


static void _init_f_operator_plus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_operator_plus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray::const_iterator *)cls)->operator+ (arg1));
}


// QJsonArray::const_iterator &QJsonArray::const_iterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator & > ((QJsonArray::const_iterator &)((QJsonArray::const_iterator *)cls)->operator++ ());
}


// QJsonArray::const_iterator QJsonArray::const_iterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray::const_iterator *)cls)->operator++ (arg1));
}


// QJsonArray::const_iterator &QJsonArray::const_iterator::operator+=(int j)


static void _init_f_operator_plus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator & > ();
}

static void _call_f_operator_plus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator & > ((QJsonArray::const_iterator &)((QJsonArray::const_iterator *)cls)->operator+= (arg1));
}


// QJsonArray::const_iterator QJsonArray::const_iterator::operator-(int j)


static void _init_f_operator_minus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_operator_minus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray::const_iterator *)cls)->operator- (arg1));
}


// int QJsonArray::const_iterator::operator-(QJsonArray::const_iterator j)


static void _init_f_operator_minus__c3074 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<QJsonArray::const_iterator > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_operator_minus__c3074 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray::const_iterator arg1 = args.read<QJsonArray::const_iterator > (heap);
  ret.write<int > ((int)((QJsonArray::const_iterator *)cls)->operator- (arg1));
}


// QJsonArray::const_iterator &QJsonArray::const_iterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::const_iterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::const_iterator & > ((QJsonArray::const_iterator &)((QJsonArray::const_iterator *)cls)->operator-- ());
}


// QJsonArray::const_iterator QJsonArray::const_iterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator > ((QJsonArray::const_iterator)((QJsonArray::const_iterator *)cls)->operator-- (arg1));
}


// QJsonArray::const_iterator &QJsonArray::const_iterator::operator-=(int j)


static void _init_f_operator_minus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::const_iterator & > ();
}

static void _call_f_operator_minus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::const_iterator & > ((QJsonArray::const_iterator &)((QJsonArray::const_iterator *)cls)->operator-= (arg1));
}


// QJsonValuePtr QJsonArray::const_iterator::operator->()


static void _init_f_operator_minus__gt__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValuePtr > ();
}

static void _call_f_operator_minus__gt__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValuePtr > ((QJsonValuePtr)((QJsonArray::const_iterator *)cls)->operator-> ());
}


// bool QJsonArray::const_iterator::operator<(const QJsonArray::const_iterator &other)


static void _init_f_operator_lt__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator< (arg1));
}


// bool QJsonArray::const_iterator::operator<=(const QJsonArray::const_iterator &other)


static void _init_f_operator_lt__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator<= (arg1));
}


// bool QJsonArray::const_iterator::operator==(const QJsonArray::const_iterator &o)


static void _init_f_operator_eq__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator== (arg1));
}


// bool QJsonArray::const_iterator::operator>(const QJsonArray::const_iterator &other)


static void _init_f_operator_gt__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator> (arg1));
}


// bool QJsonArray::const_iterator::operator>=(const QJsonArray::const_iterator &other)


static void _init_f_operator_gt__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::const_iterator *)cls)->operator>= (arg1));
}


// QJsonValue QJsonArray::const_iterator::operator[](int j)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonArray::const_iterator *)cls)->operator[] (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonArray_Const_iterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::const_iterator::const_iterator()\nThis method creates an object of class QJsonArray::const_iterator.", &_init_ctor_QJsonArray_Const_iterator_0, &_call_ctor_QJsonArray_Const_iterator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray *array, int index)\nThis method creates an object of class QJsonArray::const_iterator.", &_init_ctor_QJsonArray_Const_iterator_2978, &_call_ctor_QJsonArray_Const_iterator_2978);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray::const_iterator &o)\nThis method creates an object of class QJsonArray::const_iterator.", &_init_ctor_QJsonArray_Const_iterator_3951, &_call_ctor_QJsonArray_Const_iterator_3951);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::const_iterator::const_iterator(const QJsonArray::iterator &o)\nThis method creates an object of class QJsonArray::const_iterator.", &_init_ctor_QJsonArray_Const_iterator_3305, &_call_ctor_QJsonArray_Const_iterator_3305);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonArray::const_iterator::operator!=(const QJsonArray::const_iterator &o)\n", true, &_init_f_operator_excl__eq__c3951, &_call_f_operator_excl__eq__c3951);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QJsonValue QJsonArray::const_iterator::operator*()\n", true, &_init_f_operator_star__c0, &_call_f_operator_star__c0);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QJsonArray::const_iterator QJsonArray::const_iterator::operator+(int j)\n", true, &_init_f_operator_plus__c767, &_call_f_operator_plus__c767);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonArray::const_iterator &QJsonArray::const_iterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonArray::const_iterator QJsonArray::const_iterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QJsonArray::const_iterator &QJsonArray::const_iterator::operator+=(int j)\n", false, &_init_f_operator_plus__eq__767, &_call_f_operator_plus__eq__767);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method QJsonArray::const_iterator QJsonArray::const_iterator::operator-(int j)\n", true, &_init_f_operator_minus__c767, &_call_f_operator_minus__c767);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method int QJsonArray::const_iterator::operator-(QJsonArray::const_iterator j)\n", true, &_init_f_operator_minus__c3074, &_call_f_operator_minus__c3074);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonArray::const_iterator &QJsonArray::const_iterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonArray::const_iterator QJsonArray::const_iterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QJsonArray::const_iterator &QJsonArray::const_iterator::operator-=(int j)\n", false, &_init_f_operator_minus__eq__767, &_call_f_operator_minus__eq__767);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QJsonValuePtr QJsonArray::const_iterator::operator->()\n", true, &_init_f_operator_minus__gt__c0, &_call_f_operator_minus__gt__c0);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QJsonArray::const_iterator::operator<(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_lt__c3951, &_call_f_operator_lt__c3951);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QJsonArray::const_iterator::operator<=(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_lt__eq__c3951, &_call_f_operator_lt__eq__c3951);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonArray::const_iterator::operator==(const QJsonArray::const_iterator &o)\n", true, &_init_f_operator_eq__eq__c3951, &_call_f_operator_eq__eq__c3951);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QJsonArray::const_iterator::operator>(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_gt__c3951, &_call_f_operator_gt__c3951);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QJsonArray::const_iterator::operator>=(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_gt__eq__c3951, &_call_f_operator_gt__eq__c3951);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValue QJsonArray::const_iterator::operator[](int j)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  return methods;
}

gsi::Class<QJsonArray::const_iterator> decl_QJsonArray_Const_iterator ("QJsonArray_Const_iterator",
  methods_QJsonArray_Const_iterator (),
  "@qt\n@brief Binding of QJsonArray::const_iterator");

gsi::ClassExt<QJsonArray> decl_QJsonArray_Const_iterator_as_child (decl_QJsonArray_Const_iterator, "Const_iterator");

GSIQT_PUBLIC gsi::Class<QJsonArray::const_iterator> &qtdecl_QJsonArray_Const_iterator () { return decl_QJsonArray_Const_iterator; }

}

