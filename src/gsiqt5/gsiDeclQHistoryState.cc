
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
*  @file gsiDeclQHistoryState.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHistoryState>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHistoryState

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QHistoryState::staticMetaObject);
}


// QAbstractState *QHistoryState::defaultState()


static void _init_f_defaultState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractState * > ();
}

static void _call_f_defaultState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractState * > ((QAbstractState *)((QHistoryState *)cls)->defaultState ());
}


// QHistoryState::HistoryType QHistoryState::historyType()


static void _init_f_historyType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QHistoryState::HistoryType>::target_type > ();
}

static void _call_f_historyType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QHistoryState::HistoryType>::target_type > ((qt_gsi::Converter<QHistoryState::HistoryType>::target_type)qt_gsi::CppToQtAdaptor<QHistoryState::HistoryType>(((QHistoryState *)cls)->historyType ()));
}


// void QHistoryState::setDefaultState(QAbstractState *state)


static void _init_f_setDefaultState_2036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QAbstractState * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultState_2036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractState *arg1 = args.read<QAbstractState * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState *)cls)->setDefaultState (arg1);
}


// void QHistoryState::setHistoryType(QHistoryState::HistoryType type)


static void _init_f_setHistoryType_3072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHistoryType_3072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & arg1 = args.read<const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState *)cls)->setHistoryType (qt_gsi::QtToCppAdaptor<QHistoryState::HistoryType>(arg1).cref());
}


// static QString QHistoryState::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QHistoryState::tr (arg1, arg2, arg3));
}


// static QString QHistoryState::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QHistoryState::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QHistoryState () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":defaultState", "@brief Method QAbstractState *QHistoryState::defaultState()\n", true, &_init_f_defaultState_c0, &_call_f_defaultState_c0);
  methods += new qt_gsi::GenericMethod (":historyType", "@brief Method QHistoryState::HistoryType QHistoryState::historyType()\n", true, &_init_f_historyType_c0, &_call_f_historyType_c0);
  methods += new qt_gsi::GenericMethod ("setDefaultState|defaultState=", "@brief Method void QHistoryState::setDefaultState(QAbstractState *state)\n", false, &_init_f_setDefaultState_2036, &_call_f_setDefaultState_2036);
  methods += new qt_gsi::GenericMethod ("setHistoryType|historyType=", "@brief Method void QHistoryState::setHistoryType(QHistoryState::HistoryType type)\n", false, &_init_f_setHistoryType_3072, &_call_f_setHistoryType_3072);
  methods += gsi::qt_signal<bool > ("activeChanged(bool)", "activeChanged", gsi::arg("active"), "@brief Signal declaration for QHistoryState::activeChanged(bool active)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QHistoryState::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QHistoryState::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QHistoryState::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractState> &qtdecl_QAbstractState ();

qt_gsi::QtNativeClass<QHistoryState> decl_QHistoryState (qtdecl_QAbstractState (), "QHistoryState_Native",
  methods_QHistoryState (),
  "@hide\n@alias QHistoryState");

GSIQT_PUBLIC gsi::Class<QHistoryState> &qtdecl_QHistoryState () { return decl_QHistoryState; }

}


class QHistoryState_Adaptor : public QHistoryState, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHistoryState_Adaptor();

  //  [adaptor ctor] QHistoryState::QHistoryState(QState *parent)
  QHistoryState_Adaptor() : QHistoryState()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHistoryState::QHistoryState(QState *parent)
  QHistoryState_Adaptor(QState *parent) : QHistoryState(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHistoryState::QHistoryState(QHistoryState::HistoryType type, QState *parent)
  QHistoryState_Adaptor(QHistoryState::HistoryType type) : QHistoryState(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHistoryState::QHistoryState(QHistoryState::HistoryType type, QState *parent)
  QHistoryState_Adaptor(QHistoryState::HistoryType type, QState *parent) : QHistoryState(type, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QHistoryState::isSignalConnected(const QMetaMethod &signal)
  bool fp_QHistoryState_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QHistoryState::isSignalConnected(signal);
  }

  //  [expose] int QHistoryState::receivers(const char *signal)
  int fp_QHistoryState_receivers_c1731 (const char *signal) const {
    return QHistoryState::receivers(signal);
  }

  //  [expose] QObject *QHistoryState::sender()
  QObject * fp_QHistoryState_sender_c0 () const {
    return QHistoryState::sender();
  }

  //  [expose] int QHistoryState::senderSignalIndex()
  int fp_QHistoryState_senderSignalIndex_c0 () const {
    return QHistoryState::senderSignalIndex();
  }

  //  [emitter impl] void QHistoryState::activeChanged(bool active)
  void emitter_QHistoryState_activeChanged_864(bool active)
  {
    emit QHistoryState::activeChanged(active);
  }

  //  [emitter impl] void QHistoryState::destroyed(QObject *)
  void emitter_QHistoryState_destroyed_1302(QObject *arg1)
  {
    emit QHistoryState::destroyed(arg1);
  }

  //  [adaptor impl] bool QHistoryState::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QHistoryState::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QHistoryState_Adaptor, bool, QObject *, QEvent *>(&QHistoryState_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QHistoryState::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QHistoryState::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QHistoryState::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QHistoryState_Adaptor, QChildEvent *>(&QHistoryState_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QHistoryState::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QHistoryState::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QHistoryState::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QHistoryState_Adaptor, QEvent *>(&QHistoryState_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QHistoryState::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QHistoryState::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QHistoryState::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QHistoryState_Adaptor, const QMetaMethod &>(&QHistoryState_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QHistoryState::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QHistoryState::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QHistoryState::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QHistoryState_Adaptor, bool, QEvent *>(&QHistoryState_Adaptor::cbs_event_1217_0, e);
    } else {
      return QHistoryState::event(e);
    }
  }

  //  [adaptor impl] void QHistoryState::onEntry(QEvent *event)
  void cbs_onEntry_1217_0(QEvent *event)
  {
    QHistoryState::onEntry(event);
  }

  virtual void onEntry(QEvent *event)
  {
    if (cb_onEntry_1217_0.can_issue()) {
      cb_onEntry_1217_0.issue<QHistoryState_Adaptor, QEvent *>(&QHistoryState_Adaptor::cbs_onEntry_1217_0, event);
    } else {
      QHistoryState::onEntry(event);
    }
  }

  //  [adaptor impl] void QHistoryState::onExit(QEvent *event)
  void cbs_onExit_1217_0(QEvent *event)
  {
    QHistoryState::onExit(event);
  }

  virtual void onExit(QEvent *event)
  {
    if (cb_onExit_1217_0.can_issue()) {
      cb_onExit_1217_0.issue<QHistoryState_Adaptor, QEvent *>(&QHistoryState_Adaptor::cbs_onExit_1217_0, event);
    } else {
      QHistoryState::onExit(event);
    }
  }

  //  [adaptor impl] void QHistoryState::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QHistoryState::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QHistoryState_Adaptor, QTimerEvent *>(&QHistoryState_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QHistoryState::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_onEntry_1217_0;
  gsi::Callback cb_onExit_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QHistoryState_Adaptor::~QHistoryState_Adaptor() { }

//  Constructor QHistoryState::QHistoryState(QState *parent) (adaptor class)

static void _init_ctor_QHistoryState_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QHistoryState_Adaptor> ();
}

static void _call_ctor_QHistoryState_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QHistoryState_Adaptor *> (new QHistoryState_Adaptor (arg1));
}


//  Constructor QHistoryState::QHistoryState(QHistoryState::HistoryType type, QState *parent) (adaptor class)

static void _init_ctor_QHistoryState_Adaptor_4180 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QState * > (argspec_1);
  decl->set_return_new<QHistoryState_Adaptor> ();
}

static void _call_ctor_QHistoryState_Adaptor_4180 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & arg1 = args.read<const qt_gsi::Converter<QHistoryState::HistoryType>::target_type & > (heap);
  QState *arg2 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QHistoryState_Adaptor *> (new QHistoryState_Adaptor (qt_gsi::QtToCppAdaptor<QHistoryState::HistoryType>(arg1).cref(), arg2));
}


// emitter void QHistoryState::activeChanged(bool active)

static void _init_emitter_activeChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("active");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  ((QHistoryState_Adaptor *)cls)->emitter_QHistoryState_activeChanged_864 (arg1);
}


// void QHistoryState::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QHistoryState::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QHistoryState::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QHistoryState_Adaptor *)cls)->emitter_QHistoryState_destroyed_1302 (arg1);
}


// void QHistoryState::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QHistoryState::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QHistoryState_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QHistoryState::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QHistoryState_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QHistoryState::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QHistoryState_Adaptor *)cls)->fp_QHistoryState_isSignalConnected_c2394 (arg1));
}


// void QHistoryState::onEntry(QEvent *event)

static void _init_cbs_onEntry_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onEntry_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_onEntry_1217_0 (arg1);
}

static void _set_callback_cbs_onEntry_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_onEntry_1217_0 = cb;
}


// void QHistoryState::onExit(QEvent *event)

static void _init_cbs_onExit_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onExit_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_onExit_1217_0 (arg1);
}

static void _set_callback_cbs_onExit_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_onExit_1217_0 = cb;
}


// exposed int QHistoryState::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QHistoryState_Adaptor *)cls)->fp_QHistoryState_receivers_c1731 (arg1));
}


// exposed QObject *QHistoryState::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QHistoryState_Adaptor *)cls)->fp_QHistoryState_sender_c0 ());
}


// exposed int QHistoryState::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHistoryState_Adaptor *)cls)->fp_QHistoryState_senderSignalIndex_c0 ());
}


// void QHistoryState::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHistoryState_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QHistoryState_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QHistoryState> &qtdecl_QHistoryState ();

static gsi::Methods methods_QHistoryState_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHistoryState::QHistoryState(QState *parent)\nThis method creates an object of class QHistoryState.", &_init_ctor_QHistoryState_Adaptor_1216, &_call_ctor_QHistoryState_Adaptor_1216);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHistoryState::QHistoryState(QHistoryState::HistoryType type, QState *parent)\nThis method creates an object of class QHistoryState.", &_init_ctor_QHistoryState_Adaptor_4180, &_call_ctor_QHistoryState_Adaptor_4180);
  methods += new qt_gsi::GenericMethod ("emit_activeChanged", "@brief Emitter for signal void QHistoryState::activeChanged(bool active)\nCall this method to emit this signal.", false, &_init_emitter_activeChanged_864, &_call_emitter_activeChanged_864);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QHistoryState::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QHistoryState::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QHistoryState::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QHistoryState::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QHistoryState::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QHistoryState::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QHistoryState::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@hide", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@brief Virtual method void QHistoryState::onEntry(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0, &_set_callback_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@hide", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@brief Virtual method void QHistoryState::onExit(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0, &_set_callback_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QHistoryState::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QHistoryState::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QHistoryState::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QHistoryState::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QHistoryState_Adaptor> decl_QHistoryState_Adaptor (qtdecl_QHistoryState (), "QHistoryState",
  methods_QHistoryState_Adaptor (),
  "@qt\n@brief Binding of QHistoryState");

}


//  Implementation of the enum wrapper class for QHistoryState::HistoryType
namespace qt_gsi
{

static gsi::Enum<QHistoryState::HistoryType> decl_QHistoryState_HistoryType_Enum ("QHistoryState_HistoryType",
    gsi::enum_const ("ShallowHistory", QHistoryState::ShallowHistory, "@brief Enum constant QHistoryState::ShallowHistory") +
    gsi::enum_const ("DeepHistory", QHistoryState::DeepHistory, "@brief Enum constant QHistoryState::DeepHistory"),
  "@qt\n@brief This class represents the QHistoryState::HistoryType enum");

static gsi::QFlagsClass<QHistoryState::HistoryType > decl_QHistoryState_HistoryType_Enums ("QHistoryState_QFlags_HistoryType",
  "@qt\n@brief This class represents the QFlags<QHistoryState::HistoryType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHistoryState> inject_QHistoryState_HistoryType_Enum_in_parent (decl_QHistoryState_HistoryType_Enum.defs ());
static gsi::ClassExt<QHistoryState> decl_QHistoryState_HistoryType_Enum_as_child (decl_QHistoryState_HistoryType_Enum, "HistoryType");
static gsi::ClassExt<QHistoryState> decl_QHistoryState_HistoryType_Enums_as_child (decl_QHistoryState_HistoryType_Enums, "QFlags_HistoryType");

}

