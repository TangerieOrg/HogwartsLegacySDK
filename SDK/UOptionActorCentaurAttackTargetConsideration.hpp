#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorCentaurAttackTargetConsideration : public UQualifierConsideration {
public:
    FName AttackDescriptorName; // 0x28
    static UOptionActorCentaurAttackTargetConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
