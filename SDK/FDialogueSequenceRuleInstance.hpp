#pragma once
#include <cstdint>
class UStoryNode_DialogueSequence;
class USceneRigProxyActor;
class USceneAction_Camera;
class AActor;
class USceneAction_CameraFixup;
class UDialogueLineRuleState;
class USceneAction_Animation;
class USceneAction_Transform;
#pragma pack(push, 1)
struct FDialogueSequenceRuleInstance {
    char pad_0[0x20];
    UStoryNode_DialogueSequence* DSNode; // 0x20
    bool CalledFromEditor; // 0x28
    bool StopWhenAttachedToDestroyed; // 0x29
    bool CreateTransformActions; // 0x2a
    bool CreateChracterOptions; // 0x2b
    uint8_t AudioDialogueFlags; // 0x2c
    char pad_2d[0x3];
    USceneRigProxyActor* CameraProxyActor; // 0x30
    AActor* CameraActor; // 0x38
    TArray<FName> CastIDs; // 0x40
    TArray<AActor*> CastActors; // 0x50
    char pad_60[0x140];
    TArray<UDialogueLineRuleState*> LineRuleStates; // 0x1a0
    char pad_1b0[0x78];
    TArray<USceneAction_Animation*> CameraAnimationActionHistory; // 0x228
    TArray<USceneAction_CameraFixup*> CameraFixupActionHistory; // 0x238
    TArray<USceneAction_Transform*> CameraTransformActionHistory; // 0x248
    TArray<USceneAction_Camera*> CameraActionHistory; // 0x258
}; // Size: 0x268
#pragma pack(pop)
