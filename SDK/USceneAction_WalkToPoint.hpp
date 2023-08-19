#pragma once
#include <cstdint>
#include "EPerformTaskFinishAction.hpp"
#include "EPerformTaskSpeedMode.hpp"
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_WalkToPoint : public USceneRigObjectActionBase {
public:
    UTransformProvider* WorldSpaceTransform; // 0xa0
    bool bForceTravelSpeed; // 0xa8
    EPerformTaskSpeedMode TravelSpeed; // 0xa9
    char pad_aa[0x2];
    float ArrivalRadius; // 0xac
    EPerformTaskFinishAction FinishAction; // 0xb0
    char pad_b1[0x7];
    static USceneAction_WalkToPoint* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
