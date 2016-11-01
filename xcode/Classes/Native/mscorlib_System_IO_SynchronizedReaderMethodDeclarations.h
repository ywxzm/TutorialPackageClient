﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedReader
struct SynchronizedReader_t7923;
// System.IO.TextReader
struct TextReader_t1019;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
 void SynchronizedReader__ctor_m54748 (SynchronizedReader_t7923 * __this, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedReader::Close()
 void SynchronizedReader_Close_m54749 (SynchronizedReader_t7923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
 int32_t SynchronizedReader_Peek_m54750 (SynchronizedReader_t7923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
 String_t* SynchronizedReader_ReadLine_m54751 (SynchronizedReader_t7923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
 String_t* SynchronizedReader_ReadToEnd_m54752 (SynchronizedReader_t7923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
 int32_t SynchronizedReader_Read_m54753 (SynchronizedReader_t7923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t SynchronizedReader_Read_m54754 (SynchronizedReader_t7923 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;