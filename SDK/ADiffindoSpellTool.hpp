#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
class UClass;
#pragma pack(push, 1)
class ADiffindoSpellTool : public ASpellTool {
public:
    int32_t ProjectileTargetHalfAngleXY; // 0x7f0
    int32_t ProjectileTargetHalfAngleZ; // 0x7f4
    bool TargetObjects; // 0x7f8
    char pad_7f9[0x7];
    UClass* UpgradedMunitionActor; // 0x800
    char pad_808[0x30];
    static ADiffindoSpellTool* StaticClass();
}; // Size: 0x838
#pragma pack(pop)
