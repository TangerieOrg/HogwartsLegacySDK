#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorCausedReactionOnSelfActorConsideration : public UQualifierConsideration {
public:
    float TimeWindowOffset; // 0x28
    float TimeWindowSize; // 0x2c
    static UOptionActorCausedReactionOnSelfActorConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
