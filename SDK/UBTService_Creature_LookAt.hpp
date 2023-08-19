#pragma once
#include <cstdint>
#include "ECreatureLookAtBehaviorMode.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_LookAt : public UBTService {
public:
    ECreatureLookAtBehaviorMode Mode; // 0x70
    char pad_71[0x7];
    FBlackboardKeySelector TargetKey; // 0x78
    bool bLookAtTarget; // 0xa0
    bool bAimAtTarget; // 0xa1
    bool bUrgentTarget; // 0xa2
    char pad_a3[0x5];
    static UBTService_Creature_LookAt* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
