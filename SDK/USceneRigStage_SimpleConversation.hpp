#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "FSceneRigStage_Float.hpp"
#include "FSceneRigStage_Int.hpp"
#include "FSceneRigStage_String.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRigStage.hpp"
class USceneRigProvider;
#pragma pack(push, 1)
class USceneRigStage_SimpleConversation : public USceneRigStage {
public:
    char pad_180[0x10];
    FSceneRigStage_Actor LocalPlayer; // 0x190
    FSceneRigStage_Actor Camera; // 0x1a8
    FSceneRigStage_String DialogueSequenceID; // 0x1c0
    FSceneRigStage_String DialogueEventName; // 0x1d8
    FSceneRigStage_Int DialogueFlags; // 0x1f0
    FSceneRigStage_Transform AvatarHead; // 0x208
    FSceneRigStage_Transform AvatarRoot; // 0x220
    FSceneRigStage_Transform A1Head; // 0x238
    FSceneRigStage_Transform A1Root; // 0x250
    FSceneRigStage_Bool EnableInitialFadeIn; // 0x268
    FSceneRigStage_Bool EnableInitialFadeOut; // 0x280
    FSceneRigStage_Bool EnableFinalFadeIn; // 0x298
    FSceneRigStage_Bool EnableFinalFadeOut; // 0x2b0
    FSceneRigStage_Int SynchronizationMethod; // 0x2c8
    FSceneRigStage_Bool EnableLightRig; // 0x2e0
    FSceneRigStage_Bool UsesSkyColors; // 0x2f8
    FSceneRigStage_Float KeyLightColorTemperature; // 0x310
    FSceneRigStage_Float RimLightColorTemperature; // 0x328
    FSceneRigStage_Float FillLightColorTemperature; // 0x340
    FSceneRigStage_Float KeyLightIntensity; // 0x358
    FSceneRigStage_Float RimLightIntensity; // 0x370
    FSceneRigStage_Float FillLightIntensity; // 0x388
    USceneRigProvider* ActiveSceneRig; // 0x3a0
    char pad_3a8[0x8];
    static USceneRigStage_SimpleConversation* StaticClass();
}; // Size: 0x3b0
#pragma pack(pop)
