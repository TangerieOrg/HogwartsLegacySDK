#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
#pragma pack(push, 1)
struct FApparitionLevelData : public FSpellLevelData {
    char pad_1[0x3];
    float TapDistance; // 0x4
}; // Size: 0x8
#pragma pack(pop)
