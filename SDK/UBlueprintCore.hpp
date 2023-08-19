#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UBlueprintCore : public UObject {
public:
    UClass* SkeletonGeneratedClass; // 0x28
    UClass* GeneratedClass; // 0x30
    bool bLegacyNeedToPurgeSkelRefs; // 0x38
    char pad_39[0x3];
    FGuid BlueprintGuid; // 0x3c
    char pad_4c[0x4];
    static UBlueprintCore* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
