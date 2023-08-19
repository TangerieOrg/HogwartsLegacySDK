#pragma once
#include <cstdint>
#include "UDialogueLineRuleState.hpp"
class USceneAction_Animation;
class USceneAction_Transform;
class UAnimSequenceBase;
class UCameraFixupOperations;
class USceneAction_CameraFixup;
#pragma pack(push, 1)
class UDialogueLineRuleState_Camera : public UDialogueLineRuleState {
public:
    TArray<USceneAction_Animation*> LastAnimationActions; // 0x58
    TArray<UAnimSequenceBase*> LastCameraClips; // 0x68
    USceneAction_Transform* LastTransformAction; // 0x78
    UCameraFixupOperations* LastCameraFixupOperations; // 0x80
    USceneAction_CameraFixup* LastCameraFixupAction; // 0x88
    static UDialogueLineRuleState_Camera* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
