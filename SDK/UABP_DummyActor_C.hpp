#pragma once
#include <cstdint>
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_LinkedAnimGraph.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
class UAnimSequence;
struct FPoseLink;
class AActor;
class UCustomizableCharacterComponent;
class APlayerCameraManager;
class UAnimationComponent;
#pragma pack(push, 1)
class UABP_DummyActor_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2f8
    FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x398
    char pad_548[0x8];
    FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x550
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x600
    UAnimSequence* Idle_Anim; // 0x680
    char pad_688[0x8];
    static UABP_DummyActor_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation0();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_DummyActor(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Event_DeltaTimeX, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_GetCameraLocation_ReturnValue);
}; // Size: 0x690
#pragma pack(pop)
