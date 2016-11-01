﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t8797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t23279;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t23278  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::keySlots
	ObjectU5BU5D_t142* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::valueSlots
	Int32U5BU5D_t116* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::generation
	int32_t ___generation;
};
struct Dictionary_2_t23278_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<>f__am$cacheB
	Transform_1_t23279 * ___U3CU3Ef__am$cacheB;
};