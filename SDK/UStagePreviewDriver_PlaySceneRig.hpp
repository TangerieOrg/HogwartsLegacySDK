#pragma once
#include <cstdint>
#include "UStagePreviewDriver.hpp"
class USceneRig;
class USceneRigPlayer;
#pragma pack(push, 1)
class UStagePreviewDriver_PlaySceneRig : public UStagePreviewDriver {
public:
    USceneRig* SceneRig; // 0x28
    USceneRigPlayer* SceneRigPlayer; // 0x30
    static UStagePreviewDriver_PlaySceneRig* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
