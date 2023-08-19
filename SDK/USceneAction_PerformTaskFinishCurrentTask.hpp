#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_PerformTaskFinishCurrentTask : public USceneRigActionBase {
public:
    UActorProvider* PerformTaskActor; // 0x88
    static USceneAction_PerformTaskFinishCurrentTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
