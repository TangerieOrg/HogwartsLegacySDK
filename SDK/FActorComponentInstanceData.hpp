#pragma once
#include <cstdint>
#include "EComponentCreationMethod.hpp"
#include "FActorComponentDuplicatedObjectData.hpp"
class UObject;
#pragma pack(push, 1)
struct FActorComponentInstanceData {
    char pad_0[0x8];
    UObject* SourceComponentTemplate; // 0x8
    EComponentCreationMethod SourceComponentCreationMethod; // 0x10
    char pad_11[0x3];
    int32_t SourceComponentTypeSerializedIndex; // 0x14
    TArray<uint8_t> SavedProperties; // 0x18
    FActorComponentDuplicatedObjectData UniqueTransientPackage; // 0x28
    TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x38
    TArray<UObject*> ReferencedObjects; // 0x48
    TArray<FName> ReferencedNames; // 0x58
}; // Size: 0x68
#pragma pack(pop)
