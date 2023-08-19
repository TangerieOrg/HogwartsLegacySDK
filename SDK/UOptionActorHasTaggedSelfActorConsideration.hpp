#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorHasTaggedSelfActorConsideration : public UQualifierConsideration {
public:
    FName TagID; // 0x28
    static UOptionActorHasTaggedSelfActorConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
