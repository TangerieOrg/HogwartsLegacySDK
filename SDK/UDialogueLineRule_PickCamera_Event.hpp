#pragma once
#include <cstdint>
#include "EManagedCameraPriority.hpp"
#include "FCameraActionTransitionSettings.hpp"
#include "FDialogueLineRule_PickCameraItem.hpp"
#include "FSceneRigStage_ActorReference.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_PickCamera_Event : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x7];
    FSceneRigStage_ActorReference Actor; // 0x30
    TArray<FDialogueLineRule_PickCameraItem> CameraList; // 0x40
    EManagedCameraPriority Priority; // 0x50
    char pad_51[0x7];
    FCameraActionTransitionSettings TransitionInSettings; // 0x58
    FCameraActionTransitionSettings TransitionOutSettings; // 0x88
    static UDialogueLineRule_PickCamera_Event* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
