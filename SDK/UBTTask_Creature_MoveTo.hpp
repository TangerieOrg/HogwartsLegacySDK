#pragma once
#include <cstdint>
#include "ECreatureMoveToSpeedSetting.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreaturePathEndMode.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTask_MoveTo.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_MoveTo : public UBTTask_MoveTo {
public:
    bool bUseApproachRange; // 0xb0
    bool bUseParametrizedRadius; // 0xb1
    char pad_b2[0x6];
    FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xb8
    bool bKeepPreviousSpeed; // 0xf0
    ECreatureMoveToSpeedSetting SpeedSetting; // 0xf1
    ECreatureMovementSpeed SpeedChange; // 0xf2
    bool bKeepPreviousPathEndMode; // 0xf3
    ECreaturePathEndMode PathEndModeChange; // 0xf4
    bool bCheckTargetHasPreferredAreaFlag; // 0xf5
    bool bCheckLocationStoppingDistancePastTarget; // 0xf6
    bool bStoreStoppingDistance; // 0xf7
    FBlackboardKeySelector StoppingDistanceLocationBlackboardKey; // 0xf8
    bool bReportErrorOnFailure; // 0x120
    bool bDisableReportOnStoppingDistanceFailure; // 0x121
    char pad_122[0x2];
    FName ErrorName; // 0x124
    char pad_12c[0x4];
    FBlackboardKeySelector ErrorAccessoryKey; // 0x130
    static UBTTask_Creature_MoveTo* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
