#pragma once
#include <cstdint>
#include "ABroomPreviewLocator.hpp"
class USceneRigRegisteredActorComponent;
class USkeletalMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_BroomPreviewLocator_C : public ABroomPreviewLocator {
public:
    USceneRigRegisteredActorComponent* SceneRigRegisteredActor; // 0x248
    USkeletalMeshComponent* BroomPreviewMesh; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_BroomPreviewLocator_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
