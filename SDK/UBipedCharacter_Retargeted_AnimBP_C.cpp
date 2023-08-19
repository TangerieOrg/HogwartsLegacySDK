#include "AActor.hpp"
#include "ABase_Character.hpp"
#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_AvaInertialization.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_LinkedAnimGraph.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#include "UAnimationComponent.hpp"
#include "UBipedCharacter_Retargeted_AnimBP_C.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
void UBipedCharacter_Retargeted_AnimBP_C::SetHipMultipliers(float DeltaTime, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.SetHipMultipliers"));
    struct Params_SetHipMultipliers {
        float DeltaTime; // 0x0
        float CallFunc_FInterpTo_ReturnValue; // 0x4
        float CallFunc_FInterpTo_ReturnValue_1; // 0x8
        float CallFunc_FInterpTo_ReturnValue_2; // 0xc
        float CallFunc_FInterpTo_ReturnValue_3; // 0x10
    }; // Size: 0x14
    Params_SetHipMultipliers params{};
    params.DeltaTime = (float)DeltaTime;
    params.CallFunc_FInterpTo_ReturnValue = (float)CallFunc_FInterpTo_ReturnValue;
    params.CallFunc_FInterpTo_ReturnValue_1 = (float)CallFunc_FInterpTo_ReturnValue_1;
    params.CallFunc_FInterpTo_ReturnValue_2 = (float)CallFunc_FInterpTo_ReturnValue_2;
    params.CallFunc_FInterpTo_ReturnValue_3 = (float)CallFunc_FInterpTo_ReturnValue_3;
    ProcessEvent(func, &params);
}
UBipedCharacter_Retargeted_AnimBP_C* UBipedCharacter_Retargeted_AnimBP_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C");
    return (UBipedCharacter_Retargeted_AnimBP_C*)res;
}
void UBipedCharacter_Retargeted_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UBipedCharacter_Retargeted_AnimBP_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UBipedCharacter_Retargeted_AnimBP_C::AnimNotify_PickUpPocket() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.AnimNotify_PickUpPocket"));
    struct Params_AnimNotify_PickUpPocket {
    }; // Size: 0x0
    Params_AnimNotify_PickUpPocket params{};
    ProcessEvent(func, &params);
}
void UBipedCharacter_Retargeted_AnimBP_C::ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Biped/Teen/Male/Stu_Med/Retarget/BipedCharacter_Retargeted_AnimBP.BipedCharacter_Retargeted_AnimBP_C.ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP"));
    struct Params_ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x8
        ABase_Character* K2Node_DynamicCast_AsBase_Character; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        float K2Node_Event_DeltaTimeX; // 0x1c
    }; // Size: 0x20
    Params_ExecuteUbergraph_BipedCharacter_Retargeted_AnimBP params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.K2Node_DynamicCast_AsBase_Character = (ABase_Character*)K2Node_DynamicCast_AsBase_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_DeltaTimeX = (float)K2Node_Event_DeltaTimeX;
    ProcessEvent(func, &params);
}
