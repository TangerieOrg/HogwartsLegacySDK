#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorBonusForPreferedParentConsideration : public UQualifierConsideration {
public:
    float BonusForParent; // 0x28
    float BonusForMother; // 0x2c
    static UOptionActorBonusForPreferedParentConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
