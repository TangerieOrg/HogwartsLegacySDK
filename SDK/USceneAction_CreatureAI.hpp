#pragma once
#include <cstdint>
#include "ECreatureIdleOverrideState.hpp"
#include "ECreatureStance.hpp"
#include "ESceneAction_CreatureFlyingOption.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_CreatureAI : public USceneRigObjectActionBase {
public:
    bool bSet_IdleOverrideState; // 0xa0
    ECreatureIdleOverrideState IdleOverrideState; // 0xa1
    bool bSet_StationaryForNurtureInteract; // 0xa2
    bool bStationaryForNurtureInteract; // 0xa3
    bool bSet_FlyingOption; // 0xa4
    ESceneAction_CreatureFlyingOption FlyingOption; // 0xa5
    bool bSet_EnablePerception; // 0xa6
    bool bEnablePerception; // 0xa7
    bool bSet_DesiredStance; // 0xa8
    ECreatureStance DesiredStance; // 0xa9
    char pad_aa[0x6];
    static USceneAction_CreatureAI* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
