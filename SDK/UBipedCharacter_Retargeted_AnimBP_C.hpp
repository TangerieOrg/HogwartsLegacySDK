#pragma once
#include <cstdint>
#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_AvaInertialization.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_LinkedAnimGraph.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBiped_AnimInstance.hpp"
class UAnimationComponent;
struct FPoseLink;
class AActor;
class ABase_Character;
#pragma pack(push, 1)
class UBipedCharacter_Retargeted_AnimBP_C : public UBiped_AnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x980
    FAnimNode_Root AnimGraphNode_Root; // 0x988
    FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x9b8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa68
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa98
    char pad_b48[0x8];
    FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0xb50
    FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0xc00
    FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xca0
    FAnimNode_AvaInertialization AnimGraphNode_AvaInertialization; // 0xd40
    FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0xdc0
    float __CustomProperty_Alpha_2472CE0342E67777AB312F9301949E2F; // 0xf70
    float MinHipMultiplier; // 0xf74
    float MaxHipMultiplier; // 0xf78
    int32_t ShowIKFloorContact; // 0xf7c
    FVector GazeTargetWS; // 0xf80
    float GazeTargetWeight; // 0xf8c
    UAnimationComponent* AnimComp; // 0xf90
    float ShoulderFixupAlpha; // 0xf98
    char pad_f9c[0x4];
    static UBipedCharacter_Retargeted_AnimBP_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void SetHipMultipliers(float DeltaTime, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_3);
    void AnimNotify_PickUpPocket();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
}; // Size: 0xfa0
#pragma pack(pop)
