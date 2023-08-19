#pragma once
#include <cstdint>
#include "EPerformTaskFinishAction.hpp"
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_PerformTaskFollowSpline : public USceneRigObjectActionBase {
public:
    UActorProvider* SplineFollowerActor; // 0xa0
    EPerformTaskFinishAction FinishAction; // 0xa8
    char pad_a9[0x7];
    static USceneAction_PerformTaskFollowSpline* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
