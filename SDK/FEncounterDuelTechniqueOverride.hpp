#pragma once
#include <cstdint>
#include "EEncounterDuelTechniqueOverrideType.hpp"
#pragma pack(push, 1)
struct FEncounterDuelTechniqueOverride {
    FName ID; // 0x0
    EEncounterDuelTechniqueOverrideType OverrideType; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
