﻿#pragma once
#include <stdint.h>
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t7833;
// System.IO.TextReader
struct TextReader_t1019;
// System.Collections.Stack
struct Stack_t6658;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Char[]
struct CharU5BU5D_t1016;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t7832;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t7830  : public Object_t
{
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	Object_t * ___handler;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t1019 * ___reader;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t6658 * ___elementNames;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t6658 * ___xmlSpaces;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t1097 * ___buffer;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t1016* ___nameBuffer;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t7832 * ___attributes;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn;
};
struct SmallXmlParser_t7830_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t944 * ___U3CU3Ef__switch$map18;
};