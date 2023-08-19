#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_OpenChest_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTargetTracker.hpp"
void UBTT_Biped_OpenChest_C::CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::CalculateLocation(UObject* Chest, UObject* Biped, UTargetTracker*& FacingTarget, FRotator& Rotation, FVector& Location, FVector& Direction, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1) {}
void UBTT_Biped_OpenChest_C::SetAvatarTickPrerequisite(bool SetPrerequisite, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.SetAvatarTickPrerequisite"));
    struct Params_SetAvatarTickPrerequisite {
        bool SetPrerequisite; // 0x0
        char pad_1[0x7];
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x8
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x10
        UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x18
    }; // Size: 0x20
    Params_SetAvatarTickPrerequisite params{};
    params.SetPrerequisite = (bool)SetPrerequisite;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCharacterMovementComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    ProcessEvent(func, &params);
}
UBTT_Biped_OpenChest_C* UBTT_Biped_OpenChest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C");
    return (UBTT_Biped_OpenChest_C*)res;
}
void UBTT_Biped_OpenChest_C::CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::LootUIDone(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.LootUIDone"));
    struct Params_LootUIDone {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_LootUIDone params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_OpenChest_C::ExecuteUbergraph_BTT_Biped_OpenChest(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
