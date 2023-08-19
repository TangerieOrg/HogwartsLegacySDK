#pragma once
#include <cstdint>
#include "FRCExposedActorDescription.hpp"
#include "FRCExposedFunctionDescription.hpp"
#include "FRCExposedPropertyDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetModifiedEntitiesDescription {
    TArray<FRCExposedPropertyDescription> ModifiedRCProperties; // 0x0
    TArray<FRCExposedFunctionDescription> ModifiedRCFunctions; // 0x10
    TArray<FRCExposedActorDescription> ModifiedRCActors; // 0x20
}; // Size: 0x30
#pragma pack(pop)
