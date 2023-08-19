#pragma once
#include <cstdint>
class UObject;
class UFoliageType;
class UClass;
#pragma pack(push, 1)
struct FFoliageTypeObject {
    UObject* FoliageTypeObject; // 0x0
    UFoliageType* TypeInstance; // 0x8
    bool bIsAsset; // 0x10
    char pad_11[0x7];
    UClass* Type; // 0x18
}; // Size: 0x20
#pragma pack(pop)
