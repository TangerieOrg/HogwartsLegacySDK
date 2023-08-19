#pragma once
#include <cstdint>
#include "AFireOnceThrowSpellTool.hpp"
class UClass;
#pragma pack(push, 1)
class AStupefySpellTool : public AFireOnceThrowSpellTool {
public:
    UClass* AOEMunition; // 0x890
    float CharacterDurationScaleTalent; // 0x898
    float CharacterDamageTalent; // 0x89c
    bool KillAuthorityFigure; // 0x8a0
    char pad_8a1[0x7];
    UClass* UpgradedMunitionActor; // 0x8a8
    char pad_8b0[0x8];
    static AStupefySpellTool* StaticClass();
}; // Size: 0x8b8
#pragma pack(pop)
