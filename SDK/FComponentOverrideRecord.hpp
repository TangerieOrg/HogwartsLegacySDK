#pragma once
#include <cstdint>
#include "FBlueprintCookedComponentInstancingData.hpp"
#include "FComponentKey.hpp"
class UClass;
class UActorComponent;
#pragma pack(push, 1)
struct FComponentOverrideRecord {
    UClass* ComponentClass; // 0x0
    UActorComponent* ComponentTemplate; // 0x8
    FComponentKey ComponentKey; // 0x10
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
}; // Size: 0x78
#pragma pack(pop)
