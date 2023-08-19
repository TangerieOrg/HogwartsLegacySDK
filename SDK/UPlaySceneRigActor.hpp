#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class ASceneRigActor;
#pragma pack(push, 1)
class UPlaySceneRigActor : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x30];
    ASceneRigActor* m_SceneRigActor; // 0x60
    ETimeRigInitializingBehavior m_InitializingBehaviorType; // 0x68
    char pad_69[0x7];
    static UPlaySceneRigActor* StaticClass();
    static UPlaySceneRigActor* PlaySceneRig(ASceneRigActor* SceneRigActor, ETimeRigInitializingBehavior InitializingBehaviorType);
}; // Size: 0x70
#pragma pack(pop)
