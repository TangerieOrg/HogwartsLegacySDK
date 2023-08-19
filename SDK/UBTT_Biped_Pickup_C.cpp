#include "AActor.hpp"
#include "ABP_WandTool_C.hpp"
#include "AHerb.hpp"
#include "AWandTool.hpp"
#include "FGameplayTag.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Pickup_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void UBTT_Biped_Pickup_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
bool UBTT_Biped_Pickup_C::IsCrouching(USkeletalMeshComponent* Temp_object_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {}
UBTT_Biped_Pickup_C* UBTT_Biped_Pickup_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C");
    return (UBTT_Biped_Pickup_C*)res;
}
void UBTT_Biped_Pickup_C::NotifyCollected(uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTT_Biped_Pickup_C::SwitchBehavior(bool Temp_bool_Variable, FGameplayTag Temp_struct_Variable, FGameplayTag Temp_struct_Variable_1, bool CallFunc_IsRidingCreature_ReturnValue, FGameplayTag K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.SwitchBehavior"));
    struct Params_SwitchBehavior {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x3];
        FGameplayTag Temp_struct_Variable; // 0x4
        FGameplayTag Temp_struct_Variable_1; // 0xc
        bool CallFunc_IsRidingCreature_ReturnValue; // 0x14
        char pad_15[0x3];
        FGameplayTag K2Node_Select_Default; // 0x18
    }; // Size: 0x20
    Params_SwitchBehavior params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_struct_Variable = (FGameplayTag)Temp_struct_Variable;
    params.Temp_struct_Variable_1 = (FGameplayTag)Temp_struct_Variable_1;
    params.CallFunc_IsRidingCreature_ReturnValue = (bool)CallFunc_IsRidingCreature_ReturnValue;
    params.K2Node_Select_Default = (FGameplayTag)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
bool UBTT_Biped_Pickup_C::IsRidingCreature(AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetContextOnActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.IsRidingCreature"));
    struct Params_IsRidingCreature {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        bool CallFunc_GetContextOnActor_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsRidingCreature params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetContextOnActor_ReturnValue = (bool)CallFunc_GetContextOnActor_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTT_Biped_Pickup_C::WandDown(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.WandDown"));
    struct Params_WandDown {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_WandDown params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Pickup_C::CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Pickup_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Pickup.BTT_Biped_Pickup_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Pickup_C::ExecuteUbergraph_BTT_Biped_Pickup(int32_t EntryPoint, AWandTool* Temp_object_Variable, UObject* K2Node_CustomEvent_Caller, ABP_WandTool_C* K2Node_DynamicCast_AsBP_Wand_Tool, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess_1) {}
