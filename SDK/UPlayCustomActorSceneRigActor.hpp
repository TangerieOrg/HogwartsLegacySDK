#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UPlaySceneRigActor.hpp"
class AActor;
class ASceneRigActor;
#pragma pack(push, 1)
class UPlayCustomActorSceneRigActor : public UPlaySceneRigActor {
public:
    AActor* m_CustomActor; // 0x70
    static UPlayCustomActorSceneRigActor* StaticClass();
    static UPlayCustomActorSceneRigActor* PlaySceneRigWithCustomActor(ASceneRigActor* SceneRigActor, AActor* CustomActor, ETimeRigInitializingBehavior InitializingBehaviorType);
}; // Size: 0x78
#pragma pack(pop)
