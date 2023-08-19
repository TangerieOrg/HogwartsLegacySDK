#pragma once
#include <cstdint>
#include "EPerformTaskFinishAction.hpp"
#include "EPerformTaskSpeedMode.hpp"
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_WalkToStation : public USceneRigObjectActionBase {
public:
    UActorProvider* StationActor; // 0xa0
    bool bForceTravelSpeed; // 0xa8
    EPerformTaskSpeedMode TravelSpeed; // 0xa9
    EPerformTaskFinishAction FinishAction; // 0xaa
    char pad_ab[0x5];
    static USceneAction_WalkToStation* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
