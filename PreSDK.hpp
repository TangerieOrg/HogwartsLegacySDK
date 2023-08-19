#pragma once

#include <Unreal/UObjectGlobals.hpp>
#include <UnrealDef.hpp>

namespace RC {
    namespace UObjectGlobals = Unreal::UObjectGlobals;
    using EObjectFlags = Unreal::EObjectFlags;
    using UObjectBaseUtility = Unreal::UObjectBaseUtility;
    using UObject = Unreal::UObject;
    using AActor = Unreal::AActor;
    using UClass = Unreal::UClass;
    using UStruct = Unreal::UStruct;
    using UScriptStruct = Unreal::UScriptStruct;
    using FField = Unreal::FField;
    using FName = Unreal::FName;
    using FString = Unreal::FString;
    using FProperty = Unreal::FProperty;
    using FIntProperty = Unreal::FIntProperty;
    using FInt8Property = Unreal::FInt8Property;
    using FInt16Property = Unreal::FInt16Property;
    using FInt64Property = Unreal::FInt64Property;
    using FByteProperty = Unreal::FByteProperty;
    using FFloatProperty = Unreal::FFloatProperty;
    using FObjectProperty = Unreal::FObjectProperty;
    using FWeakObjectProperty = Unreal::FWeakObjectProperty;
    using FClassProperty = Unreal::FClassProperty;
    using FBoolProperty = Unreal::FBoolProperty;
    using FArrayProperty = Unreal::FArrayProperty;
    using FStructProperty = Unreal::FStructProperty;
    using FNameProperty = Unreal::FNameProperty;
    using FTextProperty = Unreal::FTextProperty;
    using FStrProperty = Unreal::FStrProperty;
    template<typename T>
    using TArray = Unreal::TArray<T>;
    using UFunction = Unreal::UFunction;
    using XStruct = Unreal::XStructData;
    template<typename T1, typename T2>
    using TMap = Unreal::TMap<T1, T2>;

    using UnrealScriptFunction = Unreal::UnrealScriptFunction;
    using FFrame = Unreal::FFrame;
    using UEnum = Unreal::UEnum;

    using FWeakObjectPtr = Unreal::FWeakObjectPtr;
    using FDelegateProperty = Unreal::FDelegateProperty;
    using FMulticastInlineDelegateProperty = Unreal::FMulticastInlineDelegateProperty;
    using FMulticastSparseDelegateProperty = Unreal::FMulticastSparseDelegateProperty;
    using FSetProperty = Unreal::FSetProperty;
    using FSoftClassProperty = Unreal::FSoftClassProperty;
    using FEnumProperty = Unreal::FEnumProperty;
    using FFieldPathProperty = Unreal::FFieldPathProperty;

    using FAssetData = Unreal::FAssetData;
    using UAssetRegistry = Unreal::UAssetRegistry;
    using UAssetRegistryHelpers = Unreal::UAssetRegistryHelpers;
}


inline RC::UObject* find_uobject(std::string fullName) {
    std::wstring sFullName(fullName.begin(), fullName.end());
    auto o = RC::Unreal::UObjectGlobals::StaticFindObject(nullptr, nullptr, sFullName);
    return o;
}