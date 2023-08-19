#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UAblAnimRateGetter.hpp"
class UClass;
#pragma pack(push, 1)
class UAblAnimRateGetter_SyncAnimationPosition : public UAblAnimRateGetter {
public:
    FRuntimeFloatCurve DeltaToPlayRate; // 0x28
    float MinimumPlayRate; // 0xb0
    float MaximumPlayRate; // 0xb4
    UClass* RequiredAbility; // 0xb8
    static UAblAnimRateGetter_SyncAnimationPosition* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
