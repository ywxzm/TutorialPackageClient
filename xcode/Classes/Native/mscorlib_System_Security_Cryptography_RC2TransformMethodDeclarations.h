﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t8130;
// System.Security.Cryptography.RC2
struct RC2_t6614;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
 void RC2Transform__ctor_m55872 (RC2Transform_t8130 * __this, RC2_t6614 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t1033* ___key, ByteU5BU5D_t1033* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
 void RC2Transform__cctor_m55873 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
 void RC2Transform_ECB_m55874 (RC2Transform_t8130 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;