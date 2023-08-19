#pragma once
#include <cstdint>
#include "EAreaUsageFlagSelection.hpp"
#include "FOdcFlags.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorLocationWithinAreaFlagsConsideration : public UQualifierConsideration {
public:
    EAreaUsageFlagSelection AreaFlagSelection; // 0x28
    char pad_29[0x3];
    FOdcFlags CustomAreaFlags; // 0x2c
    static UOptionActorLocationWithinAreaFlagsConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
