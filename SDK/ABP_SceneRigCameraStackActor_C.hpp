#pragma once
#include <cstdint>
#include "ASceneRigCameraStackActor.hpp"
class UAnimationComponent;
#pragma pack(push, 1)
class ABP_SceneRigCameraStackActor_C : public ASceneRigCameraStackActor {
public:
    UAnimationComponent* Animation; // 0xe50
    static ABP_SceneRigCameraStackActor_C* StaticClass();
}; // Size: 0xe58
#pragma pack(pop)
