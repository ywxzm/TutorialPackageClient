﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct Dictionary_2_t6232;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
struct ICollection_1_t23295;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t6070;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct KeyCollection_t23307;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct ValueCollection_t23308;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>
struct IEqualityComparer_1_t23305;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>[]
struct KeyValuePair_2U5BU5D_t23309;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
struct IEnumerator_1_t23311;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_276.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__268.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor()
 void Dictionary_2__ctor_m169227 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m169228 (Dictionary_2_t6232 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Int32)
 void Dictionary_2__ctor_m169229 (Dictionary_2_t6232 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m169230 (Dictionary_2_t6232 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m169231 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m169232 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m169233 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m169234 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m169235 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m169236 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m169237 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m169238 (Dictionary_2_t6232 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m169239 (Dictionary_2_t6232 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m169240 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m169241 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m169242 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m169243 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m169244 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m169245 (Dictionary_2_t6232 * __this, KeyValuePair_2_t23310  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m169246 (Dictionary_2_t6232 * __this, KeyValuePair_2_t23310  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m169247 (Dictionary_2_t6232 * __this, KeyValuePair_2U5BU5D_t23309* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m169248 (Dictionary_2_t6232 * __this, KeyValuePair_2_t23310  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m169249 (Dictionary_2_t6232 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m169250 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m169251 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m169252 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
 int32_t Dictionary_2_get_Count_m169253 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
 int32_t Dictionary_2_get_Item_m169254 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m169255 (Dictionary_2_t6232 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m169256 (Dictionary_2_t6232 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m169257 (Dictionary_2_t6232 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m169258 (Dictionary_2_t6232 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::make_pair(TKey,TValue)
 KeyValuePair_2_t23310  Dictionary_2_make_pair_m169259 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_key(TKey,TValue)
 Object_t * Dictionary_2_pick_key_m169260 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_value(TKey,TValue)
 int32_t Dictionary_2_pick_value_m169261 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m169262 (Dictionary_2_t6232 * __this, KeyValuePair_2U5BU5D_t23309* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Resize()
 void Dictionary_2_Resize_m169263 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
 void Dictionary_2_Add_m169264 (Dictionary_2_t6232 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Clear()
 void Dictionary_2_Clear_m169265 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m169266 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m169267 (Dictionary_2_t6232 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m169268 (Dictionary_2_t6232 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m169269 (Dictionary_2_t6232 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
 bool Dictionary_2_Remove_m169270 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m169271 (Dictionary_2_t6232 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
 KeyCollection_t23307 * Dictionary_2_get_Keys_m169272 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
 ValueCollection_t23308 * Dictionary_2_get_Values_m169273 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m169274 (Dictionary_2_t6232 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTValue(System.Object)
 int32_t Dictionary_2_ToTValue_m169275 (Dictionary_2_t6232 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m169276 (Dictionary_2_t6232 * __this, KeyValuePair_2_t23310  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
 Enumerator_t23312  Dictionary_2_GetEnumerator_m169277 (Dictionary_2_t6232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m169278 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;