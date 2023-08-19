#pragma once
#include <cstdint>
#include "FMaterialSwapActorTagRules.hpp"
#include "FMaterialSwapActorTypeRules.hpp"
#include "FMaterialSwapObjectRules.hpp"
#pragma pack(push, 1)
struct FMaterialSwapActorRules {
    FMaterialSwapObjectRules ObjectFilter; // 0x0
    FMaterialSwapActorTypeRules TypeFilter; // 0x20
    char pad_25[0x3];
    FMaterialSwapActorTagRules TagFilter; // 0x28
}; // Size: 0x40
#pragma pack(pop)
