#pragma once
#include <cstdint>
#include "FRCExposedActorDescription.hpp"
#include "FRCExposedFunctionDescription.hpp"
#include "FRCExposedPropertyDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetLayoutGroupDescription {
    FName Name; // 0x0
    TArray<FRCExposedPropertyDescription> ExposedProperties; // 0x8
    TArray<FRCExposedFunctionDescription> ExposedFunctions; // 0x18
    TArray<FRCExposedActorDescription> ExposedActors; // 0x28
}; // Size: 0x38
#pragma pack(pop)
