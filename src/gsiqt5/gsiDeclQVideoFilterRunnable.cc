
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
*  @file gsiDeclQVideoFilterRunnable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoFilterRunnable>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoFilterRunnable

// QVideoFrame QVideoFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)


static void _init_f_run_8664 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QVideoFrame * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("surfaceFormat");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("flags");
  decl->add_arg<QFlags<QVideoFilterRunnable::RunFlag> > (argspec_2);
  decl->set_return<QVideoFrame > ();
}

static void _call_f_run_8664 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVideoFrame *arg1 = args.read<QVideoFrame * > (heap);
  const QVideoSurfaceFormat &arg2 = args.read<const QVideoSurfaceFormat & > (heap);
  QFlags<QVideoFilterRunnable::RunFlag> arg3 = args.read<QFlags<QVideoFilterRunnable::RunFlag> > (heap);
  ret.write<QVideoFrame > ((QVideoFrame)((QVideoFilterRunnable *)cls)->run (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QVideoFilterRunnable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("run", "@brief Method QVideoFrame QVideoFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)\n", false, &_init_f_run_8664, &_call_f_run_8664);
  return methods;
}

gsi::Class<QVideoFilterRunnable> decl_QVideoFilterRunnable ("QVideoFilterRunnable_Native",
  methods_QVideoFilterRunnable (),
  "@hide\n@alias QVideoFilterRunnable");

GSIQT_PUBLIC gsi::Class<QVideoFilterRunnable> &qtdecl_QVideoFilterRunnable () { return decl_QVideoFilterRunnable; }

}


class QVideoFilterRunnable_Adaptor : public QVideoFilterRunnable, public qt_gsi::QtObjectBase
{
public:

  virtual ~QVideoFilterRunnable_Adaptor();

  //  [adaptor ctor] QVideoFilterRunnable::QVideoFilterRunnable()
  QVideoFilterRunnable_Adaptor() : QVideoFilterRunnable()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QVideoFrame QVideoFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)
  QVideoFrame cbs_run_8664_0(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)
  {
    __SUPPRESS_UNUSED_WARNING (input);
    __SUPPRESS_UNUSED_WARNING (surfaceFormat);
    __SUPPRESS_UNUSED_WARNING (flags);
    throw qt_gsi::AbstractMethodCalledException("run");
  }

  virtual QVideoFrame run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)
  {
    if (cb_run_8664_0.can_issue()) {
      return cb_run_8664_0.issue<QVideoFilterRunnable_Adaptor, QVideoFrame, QVideoFrame *, const QVideoSurfaceFormat &, QFlags<QVideoFilterRunnable::RunFlag> >(&QVideoFilterRunnable_Adaptor::cbs_run_8664_0, input, surfaceFormat, flags);
    } else {
      throw qt_gsi::AbstractMethodCalledException("run");
    }
  }

  gsi::Callback cb_run_8664_0;
};

QVideoFilterRunnable_Adaptor::~QVideoFilterRunnable_Adaptor() { }

//  Constructor QVideoFilterRunnable::QVideoFilterRunnable() (adaptor class)

static void _init_ctor_QVideoFilterRunnable_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoFilterRunnable_Adaptor> ();
}

static void _call_ctor_QVideoFilterRunnable_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFilterRunnable_Adaptor *> (new QVideoFilterRunnable_Adaptor ());
}


// QVideoFrame QVideoFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)

static void _init_cbs_run_8664_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QVideoFrame * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("surfaceFormat");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("flags");
  decl->add_arg<QFlags<QVideoFilterRunnable::RunFlag> > (argspec_2);
  decl->set_return<QVideoFrame > ();
}

static void _call_cbs_run_8664_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVideoFrame *arg1 = args.read<QVideoFrame * > (heap);
  const QVideoSurfaceFormat &arg2 = args.read<const QVideoSurfaceFormat & > (heap);
  QFlags<QVideoFilterRunnable::RunFlag> arg3 = args.read<QFlags<QVideoFilterRunnable::RunFlag> > (heap);
  ret.write<QVideoFrame > ((QVideoFrame)((QVideoFilterRunnable_Adaptor *)cls)->cbs_run_8664_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_run_8664_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoFilterRunnable_Adaptor *)cls)->cb_run_8664_0 = cb;
}


namespace gsi
{

gsi::Class<QVideoFilterRunnable> &qtdecl_QVideoFilterRunnable ();

static gsi::Methods methods_QVideoFilterRunnable_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoFilterRunnable::QVideoFilterRunnable()\nThis method creates an object of class QVideoFilterRunnable.", &_init_ctor_QVideoFilterRunnable_Adaptor_0, &_call_ctor_QVideoFilterRunnable_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("run", "@hide", false, &_init_cbs_run_8664_0, &_call_cbs_run_8664_0);
  methods += new qt_gsi::GenericMethod ("run", "@brief Virtual method QVideoFrame QVideoFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QFlags<QVideoFilterRunnable::RunFlag> flags)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_run_8664_0, &_call_cbs_run_8664_0, &_set_callback_cbs_run_8664_0);
  return methods;
}

gsi::Class<QVideoFilterRunnable_Adaptor> decl_QVideoFilterRunnable_Adaptor (qtdecl_QVideoFilterRunnable (), "QVideoFilterRunnable",
  methods_QVideoFilterRunnable_Adaptor (),
  "@qt\n@brief Binding of QVideoFilterRunnable");

}


//  Implementation of the enum wrapper class for QVideoFilterRunnable::RunFlag
namespace qt_gsi
{

static gsi::Enum<QVideoFilterRunnable::RunFlag> decl_QVideoFilterRunnable_RunFlag_Enum ("QVideoFilterRunnable_RunFlag",
    gsi::enum_const ("LastInChain", QVideoFilterRunnable::LastInChain, "@brief Enum constant QVideoFilterRunnable::LastInChain"),
  "@qt\n@brief This class represents the QVideoFilterRunnable::RunFlag enum");

static gsi::QFlagsClass<QVideoFilterRunnable::RunFlag > decl_QVideoFilterRunnable_RunFlag_Enums ("QVideoFilterRunnable_QFlags_RunFlag",
  "@qt\n@brief This class represents the QFlags<QVideoFilterRunnable::RunFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVideoFilterRunnable> inject_QVideoFilterRunnable_RunFlag_Enum_in_parent (decl_QVideoFilterRunnable_RunFlag_Enum.defs ());
static gsi::ClassExt<QVideoFilterRunnable> decl_QVideoFilterRunnable_RunFlag_Enum_as_child (decl_QVideoFilterRunnable_RunFlag_Enum, "RunFlag");
static gsi::ClassExt<QVideoFilterRunnable> decl_QVideoFilterRunnable_RunFlag_Enums_as_child (decl_QVideoFilterRunnable_RunFlag_Enums, "QFlags_RunFlag");

}

