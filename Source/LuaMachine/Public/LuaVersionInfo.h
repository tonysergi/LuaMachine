// Copyright 2018-2020 - Roberto De Ioris

#pragma once

#include "Launch/Resources/Version.h"

#define LUA_ENGINE_VERSION (ENGINE_MAJOR_VERSION * 100 + ENGINE_MINOR_VERSION)

//
// Massive Reduction in Duplicate code.
//
#if LUA_ENGINE_VERSION < 425
using FProperty = UProperty;
using FStructProperty = UStructProperty;
using FSoftObjectProperty = USoftObjectProperty;
using FWeakObjectProperty = UWeakObjectProperty;
using FIntProperty = UIntProperty;
using FFloatProperty = UFloatProperty;
using FBoolProperty = UBoolProperty;
using FByteProperty = UByteProperty;
using FNameProperty = UNameProperty;
using FStrProperty = UStrProperty;
using FTextProperty = UTextProperty;
using FClassProperty = UClassProperty;
using FInt8Property = UInt8Property;
using FInt16Property = UInt16Property;
using FUInt16Property = UUInt16Property;
using FUInt32Property = UUInt32Property;
using FObjectProperty = UObjectProperty;
using FStructProperty = UStructProperty;
using FArrayProperty = UArrayProperty;
using FMapProperty = UMapProperty;
using FSetProperty = USetProperty;
using FObjectPropertyBase = UObjectPropertyBase;
using FMulticastDelegateProperty = UMulticastDelegateProperty;
using FDelegateProperty = UDelegateProperty;

template<typename To, typename From>
To* CastField(From* Src)
{
	return Cast<To>(Src);
}
template<typename To, typename From>
To* CastFieldChecked(From* Src)
{
	return CastChecked<To>(Src);
}
#endif //< 425