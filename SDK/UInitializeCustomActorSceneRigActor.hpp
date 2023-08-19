#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UInitializeSceneRigActor.hpp"
class AActor;
class ASceneRigActor;
#pragma pack(push, 1)
class UInitializeCustomActorSceneRigActor : public UInitializeSceneRigActor {
public:
    AActor* m_CustomActor; // 0x60
    static UInitializeCustomActorSceneRigActor* StaticClass();
    static UInitializeCustomActorSceneRigActor* InitializeWithCustomActor(ASceneRigActor* SceneRigActor, AActor* CustomActor, ETimeRigInitializingBehavior InitializingBehaviorType);
}; // Size: 0x68
#pragma pack(pop)
