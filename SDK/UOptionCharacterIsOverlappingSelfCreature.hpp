#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionCharacterIsOverlappingSelfCreature : public UQualifierConsideration {
public:
    float SelfCreatureCapsuleRadiusMultiplier; // 0x28
    float OptionCharacterCapsuleRadiusMultiplier; // 0x2c
    static UOptionCharacterIsOverlappingSelfCreature* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
