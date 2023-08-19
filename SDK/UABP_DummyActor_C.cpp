#include "AActor.hpp"
#include "APlayerCameraManager.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_LinkedAnimGraph.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#include "UABP_DummyActor_C.hpp"
#include "UAnimInstance.hpp"
#include "UAnimSequence.hpp"
#include "UAnimationComponent.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
void UABP_DummyActor_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/ABP_DummyActor.ABP_DummyActor_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
UABP_DummyActor_C* UABP_DummyActor_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/UI/ABP_DummyActor.ABP_DummyActor_C");
    return (UABP_DummyActor_C*)res;
}
void UABP_DummyActor_C::BlueprintInitializeAnimation0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/ABP_DummyActor.ABP_DummyActor_C.BlueprintInitializeAnimation"));
    struct Params_BlueprintInitializeAnimation {
    }; // Size: 0x0
    Params_BlueprintInitializeAnimation params{};
    ProcessEvent(func, &params);
}
void UABP_DummyActor_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/ABP_DummyActor.ABP_DummyActor_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UABP_DummyActor_C::ExecuteUbergraph_ABP_DummyActor(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Event_DeltaTimeX, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_GetCameraLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/ABP_DummyActor.ABP_DummyActor_C.ExecuteUbergraph_ABP_DummyActor"));
    struct Params_ExecuteUbergraph_ABP_DummyActor {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x8
        UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x19
        char pad_1a[0x2];
        float K2Node_Event_DeltaTimeX; // 0x1c
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x20
        AActor* CallFunc_GetOwningActor_ReturnValue_1; // 0x28
        bool CallFunc_IsValid_ReturnValue_1; // 0x30
        char pad_31[0x7];
        UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x38
        bool CallFunc_IsValid_ReturnValue_2; // 0x40
        char pad_41[0x3];
        FVector CallFunc_GetCameraLocation_ReturnValue; // 0x44
    }; // Size: 0x50
    Params_ExecuteUbergraph_ABP_DummyActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCustomizableCharacterComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Event_DeltaTimeX = (float)K2Node_Event_DeltaTimeX;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_GetOwningActor_ReturnValue_1 = (AActor*)CallFunc_GetOwningActor_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UAnimationComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_GetCameraLocation_ReturnValue = (FVector)CallFunc_GetCameraLocation_ReturnValue;
    ProcessEvent(func, &params);
}
