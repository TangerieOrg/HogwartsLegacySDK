#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "USceneRig.hpp"
#pragma pack(push, 1)
class UWandLink_SceneRig : public USceneRig {
public:
    FSceneRigStage_Actor Antagonist; // 0x238
    FSceneRigStage_Actor TeleportLocation1; // 0x250
    FSceneRigStage_Actor TeleportLocation2; // 0x268
    FSceneRigStage_Bool Lethal; // 0x280
    static UWandLink_SceneRig* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
