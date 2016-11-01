﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t6491;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t6484;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t6465;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t6477;
// Mono.Security.ASN1
struct ASN1_t6461;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m44977 (PKCS12_t6491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m44978 (PKCS12_t6491 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m44979 (PKCS12_t6491 * __this, ByteU5BU5D_t1033* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m44980 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m44981 (PKCS12_t6491 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m44982 (PKCS12_t6491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m44983 (PKCS12_t6491 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
 ArrayList_t5157 * PKCS12_get_Keys_m44984 (PKCS12_t6491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t6490 * PKCS12_get_Certificates_m44985 (PKCS12_t6491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m44986 (PKCS12_t6491 * __this, ByteU5BU5D_t1033* ___expected, ByteU5BU5D_t1033* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t6484 * PKCS12_GetSymmetricAlgorithm_m44987 (PKCS12_t6491 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1033* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t1033* PKCS12_Decrypt_m44988 (PKCS12_t6491 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1033* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1033* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t1033* PKCS12_Decrypt_m44989 (PKCS12_t6491 * __this, EncryptedData_t6465 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t6479  PKCS12_GetExistingParameters_m44990 (PKCS12_t6491 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m44991 (PKCS12_t6491 * __this, PrivateKeyInfo_t6477 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m44992 (PKCS12_t6491 * __this, ASN1_t6461 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t1033* PKCS12_MAC_m44993 (PKCS12_t6491 * __this, ByteU5BU5D_t1033* ___password, ByteU5BU5D_t1033* ___salt, int32_t ___iterations, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m44994 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;