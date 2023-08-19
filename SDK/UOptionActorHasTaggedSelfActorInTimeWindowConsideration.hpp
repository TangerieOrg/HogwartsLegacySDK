#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorHasTaggedSelfActorInTimeWindowConsideration : public UQualifierConsideration {
public:
    FName TagID; // 0x28
    float FalloffStart; // 0x30
    float FalloffSize; // 0x34
    static UOptionActorHasTaggedSelfActorInTimeWindowConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
