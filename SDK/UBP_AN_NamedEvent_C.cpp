#include "AActor.hpp"
#include "UAnimInstance.hpp"
#include "UAnimNotify.hpp"
#include "UAnimSequenceBase.hpp"
#include "UBP_AN_NamedEvent_C.hpp"
#include "UFunction.hpp"
#include "UNPC_Component.hpp"
#include "USkeletalMeshComponent.hpp"
bool UBP_AN_NamedEvent_C::Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue, UNPC_Component* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/AnimNotify/BP_AN_NamedEvent.BP_AN_NamedEvent_C.Received_Notify"));
    struct Params_Received_Notify {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x18
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x20
        UNPC_Component* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_Received_Notify params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UNPC_Component*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBP_AN_NamedEvent_C* UBP_AN_NamedEvent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/AnimNotify/BP_AN_NamedEvent.BP_AN_NamedEvent_C");
    return (UBP_AN_NamedEvent_C*)res;
}
FString UBP_AN_NamedEvent_C::GetNotifyName0(FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/AnimNotify/BP_AN_NamedEvent.BP_AN_NamedEvent_C.GetNotifyName"));
    struct Params_GetNotifyName {
        FString ReturnValue; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetNotifyName params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
