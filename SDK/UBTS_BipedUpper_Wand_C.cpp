#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTS_BipedUpper_Wand_C.hpp"
#include "UBTS_Biped_BasicMobility_C.hpp"
#include "UFunction.hpp"
UBTS_BipedUpper_Wand_C* UBTS_BipedUpper_Wand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C");
    return (UBTS_BipedUpper_Wand_C*)res;
}
void UBTS_BipedUpper_Wand_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
bool UBTS_BipedUpper_Wand_C::PartialBodyAbilityTest(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.PartialBodyAbilityTest"));
    struct Params_PartialBodyAbilityTest {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x8
        UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_PartialBodyAbilityTest params{};
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Anim_Instance = (UAmbulatory_AnimInstance*)K2Node_DynamicCast_AsAmbulatory_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTS_BipedUpper_Wand_C::CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_Wand_C::ExecuteUbergraph_BTS_BipedUpper_Wand(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1) {}
void UBTS_BipedUpper_Wand_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_Wand_C::CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_Wand_C::CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
