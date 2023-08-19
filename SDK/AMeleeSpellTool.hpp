#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
#pragma pack(push, 1)
class AMeleeSpellTool : public ASpellTool {
public:
    float MeleeRange; // 0x7f0
    float MeleeHalfAngle; // 0x7f4
    bool HitMultipleTargets; // 0x7f8
    bool OnlyAffectCharacters; // 0x7f9
    bool CastAtTarget; // 0x7fa
    char pad_7fb[0x5];
    static AMeleeSpellTool* StaticClass();
}; // Size: 0x800
#pragma pack(pop)
