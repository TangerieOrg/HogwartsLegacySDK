#pragma once
#include <cstdint>
#include "EPerformTaskFinishAction.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_WaitForPlayer : public USceneRigObjectActionBase {
public:
    float DistanceThreshold; // 0xa0
    bool bOrientTowardsPlayer; // 0xa4
    EPerformTaskFinishAction FinishAction; // 0xa5
    char pad_a6[0x2];
    static USceneAction_WaitForPlayer* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
