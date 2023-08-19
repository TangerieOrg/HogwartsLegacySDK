#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class ASceneRigActor;
#pragma pack(push, 1)
class UInitializeSceneRigActor : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x20];
    ASceneRigActor* m_SceneRigActor; // 0x50
    ETimeRigInitializingBehavior m_InitializingBehaviorType; // 0x58
    char pad_59[0x7];
    static UInitializeSceneRigActor* StaticClass();
    static UInitializeSceneRigActor* Initialize(ASceneRigActor* SceneRigActor, ETimeRigInitializingBehavior InitializingBehaviorType);
}; // Size: 0x60
#pragma pack(pop)
