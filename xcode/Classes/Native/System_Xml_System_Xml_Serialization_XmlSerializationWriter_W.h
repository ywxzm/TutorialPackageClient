﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t6895;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
struct WriteCallbackInfo_t6896  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::Type
	Type_t * ___Type;
	// System.String System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::TypeName
	String_t* ___TypeName;
	// System.String System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::TypeNs
	String_t* ___TypeNs;
	// System.Xml.Serialization.XmlSerializationWriteCallback System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo::Callback
	XmlSerializationWriteCallback_t6895 * ___Callback;
};