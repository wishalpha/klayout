
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
*  @file gsiDeclQAudioDeviceInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioDeviceInfo

//  Constructor QAudioDeviceInfo::QAudioDeviceInfo()


static void _init_ctor_QAudioDeviceInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioDeviceInfo> ();
}

static void _call_ctor_QAudioDeviceInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDeviceInfo *> (new QAudioDeviceInfo ());
}


//  Constructor QAudioDeviceInfo::QAudioDeviceInfo(const QAudioDeviceInfo &other)


static void _init_ctor_QAudioDeviceInfo_2880 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioDeviceInfo & > (argspec_0);
  decl->set_return_new<QAudioDeviceInfo> ();
}

static void _call_ctor_QAudioDeviceInfo_2880 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDeviceInfo &arg1 = args.read<const QAudioDeviceInfo & > (heap);
  ret.write<QAudioDeviceInfo *> (new QAudioDeviceInfo (arg1));
}


// QString QAudioDeviceInfo::deviceName()


static void _init_f_deviceName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_deviceName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioDeviceInfo *)cls)->deviceName ());
}


// bool QAudioDeviceInfo::isFormatSupported(const QAudioFormat &format)


static void _init_f_isFormatSupported_c2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isFormatSupported_c2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = args.read<const QAudioFormat & > (heap);
  ret.write<bool > ((bool)((QAudioDeviceInfo *)cls)->isFormatSupported (arg1));
}


// bool QAudioDeviceInfo::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioDeviceInfo *)cls)->isNull ());
}


// QAudioFormat QAudioDeviceInfo::nearestFormat(const QAudioFormat &format)


static void _init_f_nearestFormat_c2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return<QAudioFormat > ();
}

static void _call_f_nearestFormat_c2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = args.read<const QAudioFormat & > (heap);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioDeviceInfo *)cls)->nearestFormat (arg1));
}


// bool QAudioDeviceInfo::operator!=(const QAudioDeviceInfo &other)


static void _init_f_operator_excl__eq__c2880 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioDeviceInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2880 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDeviceInfo &arg1 = args.read<const QAudioDeviceInfo & > (heap);
  ret.write<bool > ((bool)((QAudioDeviceInfo *)cls)->operator!= (arg1));
}


// QAudioDeviceInfo &QAudioDeviceInfo::operator=(const QAudioDeviceInfo &other)


static void _init_f_operator_eq__2880 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioDeviceInfo & > (argspec_0);
  decl->set_return<QAudioDeviceInfo & > ();
}

static void _call_f_operator_eq__2880 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDeviceInfo &arg1 = args.read<const QAudioDeviceInfo & > (heap);
  ret.write<QAudioDeviceInfo & > ((QAudioDeviceInfo &)((QAudioDeviceInfo *)cls)->operator= (arg1));
}


// bool QAudioDeviceInfo::operator==(const QAudioDeviceInfo &other)


static void _init_f_operator_eq__eq__c2880 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioDeviceInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2880 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDeviceInfo &arg1 = args.read<const QAudioDeviceInfo & > (heap);
  ret.write<bool > ((bool)((QAudioDeviceInfo *)cls)->operator== (arg1));
}


// QAudioFormat QAudioDeviceInfo::preferredFormat()


static void _init_f_preferredFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioFormat > ();
}

static void _call_f_preferredFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioDeviceInfo *)cls)->preferredFormat ());
}


// QList<QAudioFormat::Endian> QAudioDeviceInfo::supportedByteOrders()


static void _init_f_supportedByteOrders_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAudioFormat::Endian> > ();
}

static void _call_f_supportedByteOrders_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudioFormat::Endian> > ((QList<QAudioFormat::Endian>)((QAudioDeviceInfo *)cls)->supportedByteOrders ());
}


// QList<int> QAudioDeviceInfo::supportedChannelCounts()


static void _init_f_supportedChannelCounts_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_supportedChannelCounts_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)((QAudioDeviceInfo *)cls)->supportedChannelCounts ());
}


// QStringList QAudioDeviceInfo::supportedCodecs()


static void _init_f_supportedCodecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedCodecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAudioDeviceInfo *)cls)->supportedCodecs ());
}


// QList<int> QAudioDeviceInfo::supportedSampleRates()


static void _init_f_supportedSampleRates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_supportedSampleRates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)((QAudioDeviceInfo *)cls)->supportedSampleRates ());
}


// QList<int> QAudioDeviceInfo::supportedSampleSizes()


static void _init_f_supportedSampleSizes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_supportedSampleSizes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)((QAudioDeviceInfo *)cls)->supportedSampleSizes ());
}


// QList<QAudioFormat::SampleType> QAudioDeviceInfo::supportedSampleTypes()


static void _init_f_supportedSampleTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAudioFormat::SampleType> > ();
}

static void _call_f_supportedSampleTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudioFormat::SampleType> > ((QList<QAudioFormat::SampleType>)((QAudioDeviceInfo *)cls)->supportedSampleTypes ());
}


// static QList<QAudioDeviceInfo> QAudioDeviceInfo::availableDevices(QAudio::Mode mode)


static void _init_f_availableDevices_1520 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QAudio::Mode>::target_type & > (argspec_0);
  decl->set_return<QList<QAudioDeviceInfo> > ();
}

static void _call_f_availableDevices_1520 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Mode>::target_type & arg1 = args.read<const qt_gsi::Converter<QAudio::Mode>::target_type & > (heap);
  ret.write<QList<QAudioDeviceInfo> > ((QList<QAudioDeviceInfo>)QAudioDeviceInfo::availableDevices (qt_gsi::QtToCppAdaptor<QAudio::Mode>(arg1).cref()));
}


// static QAudioDeviceInfo QAudioDeviceInfo::defaultInputDevice()


static void _init_f_defaultInputDevice_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QAudioDeviceInfo > ();
}

static void _call_f_defaultInputDevice_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDeviceInfo > ((QAudioDeviceInfo)QAudioDeviceInfo::defaultInputDevice ());
}


// static QAudioDeviceInfo QAudioDeviceInfo::defaultOutputDevice()


static void _init_f_defaultOutputDevice_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QAudioDeviceInfo > ();
}

static void _call_f_defaultOutputDevice_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDeviceInfo > ((QAudioDeviceInfo)QAudioDeviceInfo::defaultOutputDevice ());
}



namespace gsi
{

static gsi::Methods methods_QAudioDeviceInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioDeviceInfo::QAudioDeviceInfo()\nThis method creates an object of class QAudioDeviceInfo.", &_init_ctor_QAudioDeviceInfo_0, &_call_ctor_QAudioDeviceInfo_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioDeviceInfo::QAudioDeviceInfo(const QAudioDeviceInfo &other)\nThis method creates an object of class QAudioDeviceInfo.", &_init_ctor_QAudioDeviceInfo_2880, &_call_ctor_QAudioDeviceInfo_2880);
  methods += new qt_gsi::GenericMethod ("deviceName", "@brief Method QString QAudioDeviceInfo::deviceName()\n", true, &_init_f_deviceName_c0, &_call_f_deviceName_c0);
  methods += new qt_gsi::GenericMethod ("isFormatSupported?", "@brief Method bool QAudioDeviceInfo::isFormatSupported(const QAudioFormat &format)\n", true, &_init_f_isFormatSupported_c2509, &_call_f_isFormatSupported_c2509);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QAudioDeviceInfo::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("nearestFormat", "@brief Method QAudioFormat QAudioDeviceInfo::nearestFormat(const QAudioFormat &format)\n", true, &_init_f_nearestFormat_c2509, &_call_f_nearestFormat_c2509);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QAudioDeviceInfo::operator!=(const QAudioDeviceInfo &other)\n", true, &_init_f_operator_excl__eq__c2880, &_call_f_operator_excl__eq__c2880);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QAudioDeviceInfo &QAudioDeviceInfo::operator=(const QAudioDeviceInfo &other)\n", false, &_init_f_operator_eq__2880, &_call_f_operator_eq__2880);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QAudioDeviceInfo::operator==(const QAudioDeviceInfo &other)\n", true, &_init_f_operator_eq__eq__c2880, &_call_f_operator_eq__eq__c2880);
  methods += new qt_gsi::GenericMethod ("preferredFormat", "@brief Method QAudioFormat QAudioDeviceInfo::preferredFormat()\n", true, &_init_f_preferredFormat_c0, &_call_f_preferredFormat_c0);
  methods += new qt_gsi::GenericMethod ("supportedByteOrders", "@brief Method QList<QAudioFormat::Endian> QAudioDeviceInfo::supportedByteOrders()\n", true, &_init_f_supportedByteOrders_c0, &_call_f_supportedByteOrders_c0);
  methods += new qt_gsi::GenericMethod ("supportedChannelCounts", "@brief Method QList<int> QAudioDeviceInfo::supportedChannelCounts()\n", true, &_init_f_supportedChannelCounts_c0, &_call_f_supportedChannelCounts_c0);
  methods += new qt_gsi::GenericMethod ("supportedCodecs", "@brief Method QStringList QAudioDeviceInfo::supportedCodecs()\n", true, &_init_f_supportedCodecs_c0, &_call_f_supportedCodecs_c0);
  methods += new qt_gsi::GenericMethod ("supportedSampleRates", "@brief Method QList<int> QAudioDeviceInfo::supportedSampleRates()\n", true, &_init_f_supportedSampleRates_c0, &_call_f_supportedSampleRates_c0);
  methods += new qt_gsi::GenericMethod ("supportedSampleSizes", "@brief Method QList<int> QAudioDeviceInfo::supportedSampleSizes()\n", true, &_init_f_supportedSampleSizes_c0, &_call_f_supportedSampleSizes_c0);
  methods += new qt_gsi::GenericMethod ("supportedSampleTypes", "@brief Method QList<QAudioFormat::SampleType> QAudioDeviceInfo::supportedSampleTypes()\n", true, &_init_f_supportedSampleTypes_c0, &_call_f_supportedSampleTypes_c0);
  methods += new qt_gsi::GenericStaticMethod ("availableDevices", "@brief Static method QList<QAudioDeviceInfo> QAudioDeviceInfo::availableDevices(QAudio::Mode mode)\nThis method is static and can be called without an instance.", &_init_f_availableDevices_1520, &_call_f_availableDevices_1520);
  methods += new qt_gsi::GenericStaticMethod ("defaultInputDevice", "@brief Static method QAudioDeviceInfo QAudioDeviceInfo::defaultInputDevice()\nThis method is static and can be called without an instance.", &_init_f_defaultInputDevice_0, &_call_f_defaultInputDevice_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultOutputDevice", "@brief Static method QAudioDeviceInfo QAudioDeviceInfo::defaultOutputDevice()\nThis method is static and can be called without an instance.", &_init_f_defaultOutputDevice_0, &_call_f_defaultOutputDevice_0);
  return methods;
}

gsi::Class<QAudioDeviceInfo> decl_QAudioDeviceInfo ("QAudioDeviceInfo",
  methods_QAudioDeviceInfo (),
  "@qt\n@brief Binding of QAudioDeviceInfo");


GSIQT_PUBLIC gsi::Class<QAudioDeviceInfo> &qtdecl_QAudioDeviceInfo () { return decl_QAudioDeviceInfo; }

}

