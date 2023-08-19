#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "FSceneRigStage_Float.hpp"
#include "FSceneRigStage_Int.hpp"
#include "FSceneRigStage_String.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRig.hpp"
class USceneRigProvider;
#pragma pack(push, 1)
class USceneRig_SimpleConversation : public USceneRig {
public:
    FSceneRigStage_Actor interactionActor; // 0x238
    FSceneRigStage_Actor LocalPlayer; // 0x250
    FSceneRigStage_Actor Camera; // 0x268
    FSceneRigStage_String DialogueSequenceID; // 0x280
    FSceneRigStage_String DialogueEventName; // 0x298
    FSceneRigStage_Int DialogueFlags; // 0x2b0
    FSceneRigStage_Transform AvatarHead; // 0x2c8
    FSceneRigStage_Transform AvatarRoot; // 0x2e0
    FSceneRigStage_Transform AvatarRootFinal; // 0x2f8
    FSceneRigStage_Transform A1Head; // 0x310
    FSceneRigStage_Transform A1Root; // 0x328
    FSceneRigStage_Transform A1RootFinal; // 0x340
    FSceneRigStage_Bool EnableInitialFadeIn; // 0x358
    FSceneRigStage_Bool EnableInitialFadeOut; // 0x370
    FSceneRigStage_Bool EnableFinalFadeIn; // 0x388
    FSceneRigStage_Bool EnableFinalFadeOut; // 0x3a0
    FSceneRigStage_Int SynchronizationMethod; // 0x3b8
    FSceneRigStage_Bool EnableLightRig; // 0x3d0
    FSceneRigStage_Bool UsesSkyColors; // 0x3e8
    FSceneRigStage_Float KeyLightColorTemperature; // 0x400
    FSceneRigStage_Float RimLightColorTemperature; // 0x418
    FSceneRigStage_Float FillLightColorTemperature; // 0x430
    FSceneRigStage_Float KeyLightIntensity; // 0x448
    FSceneRigStage_Float RimLightIntensity; // 0x460
    FSceneRigStage_Float FillLightIntensity; // 0x478
    USceneRigProvider* ActiveSceneRig; // 0x490
    static USceneRig_SimpleConversation* StaticClass();
}; // Size: 0x498
#pragma pack(pop)
