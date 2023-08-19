#pragma once
#include <cstdint>
#include "AStoryGraphActor.hpp"
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "FSceneRigStage_Float.hpp"
#include "FSceneRigStage_Int.hpp"
#include "FSceneRigStage_String.hpp"
#include "FSceneRigStage_Transform.hpp"
#pragma pack(push, 1)
class AConversationActor : public AStoryGraphActor {
public:
    char pad_528[0x18];
    FSceneRigStage_Actor interactionActor; // 0x540
    FSceneRigStage_Actor LocalPlayer; // 0x558
    FSceneRigStage_Actor Camera; // 0x570
    FSceneRigStage_String DialogueSequenceID; // 0x588
    FSceneRigStage_String DialogueEventName; // 0x5a0
    FSceneRigStage_Int DialogueFlags; // 0x5b8
    FSceneRigStage_Transform AvatarHead; // 0x5d0
    FSceneRigStage_Transform AvatarRoot; // 0x5e8
    FSceneRigStage_Transform AvatarRootFinal; // 0x600
    FSceneRigStage_Transform A1Head; // 0x618
    FSceneRigStage_Transform A1Root; // 0x630
    FSceneRigStage_Transform A1RootFinal; // 0x648
    FSceneRigStage_Bool EnableInitialFadeOut; // 0x660
    FSceneRigStage_Bool EnableInitialFadeIn; // 0x678
    FSceneRigStage_Bool EnableFinalFadeOut; // 0x690
    FSceneRigStage_Bool EnableFinalFadeIn; // 0x6a8
    FSceneRigStage_Int SynchronizationMethod; // 0x6c0
    FSceneRigStage_Bool EnableLightRig; // 0x6d8
    FSceneRigStage_Bool UsesSkyColors; // 0x6f0
    FSceneRigStage_Float KeyLightColorTemperature; // 0x708
    FSceneRigStage_Float RimLightColorTemperature; // 0x720
    FSceneRigStage_Float FillLightColorTemperature; // 0x738
    FSceneRigStage_Float KeyLightIntensity; // 0x750
    FSceneRigStage_Float RimLightIntensity; // 0x768
    FSceneRigStage_Float FillLightIntensity; // 0x780
    char pad_798[0xc0];
    static AConversationActor* StaticClass();
}; // Size: 0x858
#pragma pack(pop)
