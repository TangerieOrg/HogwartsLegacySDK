#pragma once
#include <cstdint>
#include "EBallisticTaskDestinationSource.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblBallisticTask : public UAblAbilityTask {
public:
    EBallisticTaskDestinationSource DestSource; // 0x70
    char pad_71[0x3];
    FVector Destination; // 0x74
    float OverrideGravity; // 0x80
    float ArcParamMin; // 0x84
    float ArcParamMax; // 0x88
    float TimeMult; // 0x8c
    FVector TargetOffset; // 0x90
    float Distance; // 0x9c
    float MaxDistance; // 0xa0
    bool bIgnoreNonStatic; // 0xa4
    bool bCollateralDamage; // 0xa5
    char pad_a6[0x2];
    static UAblBallisticTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
