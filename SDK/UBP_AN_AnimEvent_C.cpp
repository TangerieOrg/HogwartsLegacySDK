#include "AActor.hpp"
#include "EEnemy_AbilityEvent.hpp"
#include "UAnimInstance.hpp"
#include "UAnimNotify.hpp"
#include "UAnimSequenceBase.hpp"
#include "UBP_AN_AnimEvent_C.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
UBP_AN_AnimEvent_C* UBP_AN_AnimEvent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/AnimNotify/BP_AN_AnimEvent.BP_AN_AnimEvent_C");
    return (UBP_AN_AnimEvent_C*)res;
}
bool UBP_AN_AnimEvent_C::Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/AnimNotify/BP_AN_AnimEvent.BP_AN_AnimEvent_C.Received_Notify"));
    struct Params_Received_Notify {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x18
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x20
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_Received_Notify params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
