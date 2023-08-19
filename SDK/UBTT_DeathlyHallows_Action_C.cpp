#include "AActor.hpp"
#include "ABP_Cloak_Prop_C.hpp"
#include "ABP_DH_Item_C.hpp"
#include "ABiped_Player.hpp"
#include "ADeathlyHallowsCloakTool.hpp"
#include "ASpellTool.hpp"
#include "ATool.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_DeathlyHallows_Action_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void UBTT_DeathlyHallows_Action_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::UseCloak(AWandTool* Temp_object_Variable, AActor* CallFunc_GetActorOwner_ReturnValue) {}
UBTT_DeathlyHallows_Action_C* UBTT_DeathlyHallows_Action_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C");
    return (UBTT_DeathlyHallows_Action_C*)res;
}
void UBTT_DeathlyHallows_Action_C::EquipCloak(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Cloak_Prop_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.EquipCloak"));
    struct Params_EquipCloak {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        char pad_8[0x8];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x10
        USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue; // 0x40
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x48
        ABP_Cloak_Prop_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x50
    }; // Size: 0x58
    Params_EquipCloak params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_GetSkeletalMesh_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetSkeletalMesh_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_Cloak_Prop_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::EquipStone(AWandTool* Temp_object_Variable, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, ADeathlyHallowsCloakTool* K2Node_DynamicCast_AsDeathly_Hallows_Cloak_Tool, bool K2Node_DynamicCast_bSuccess_1, ATool* CallFunc_ActivateTool_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1) {}
void UBTT_DeathlyHallows_Action_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::EquipWand(AWandTool* Temp_object_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_DeathlyHallows_Action_C::SetInteractActor(FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, ABP_DH_Item_C* K2Node_DynamicCast_AsBP_DH_Item, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.SetInteractActor"));
    struct Params_SetInteractActor {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x8
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x10
        ABP_DH_Item_C* K2Node_DynamicCast_AsBP_DH_Item; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_SetInteractActor params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsBP_DH_Item = (ABP_DH_Item_C*)K2Node_DynamicCast_AsBP_DH_Item;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::DeathlyHallowsSetup(bool CallFunc_GetVariantName_FromHandle_bFound, FName CallFunc_GetVariantName_FromHandle_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetVariantName_FromHandle_bFound_1, FName CallFunc_GetVariantName_FromHandle_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchName_CmpSuccess) {}
void UBTT_DeathlyHallows_Action_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_DeathlyHallows_Action_C::ExecuteUbergraph_BTT_DeathlyHallows_Action(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1) {}
