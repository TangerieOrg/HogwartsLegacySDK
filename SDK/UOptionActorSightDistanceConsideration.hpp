#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorSightDistanceConsideration : public UQualifierConsideration {
public:
    bool bUseLoseSightDistance; // 0x28
    char pad_29[0x7];
    static UOptionActorSightDistanceConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
