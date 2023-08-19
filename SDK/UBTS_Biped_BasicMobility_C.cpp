#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTS_Biped_BasicMobility_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTS_Biped_BasicMobility_C* UBTS_Biped_BasicMobility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C");
    return (UBTS_Biped_BasicMobility_C*)res;
}
void UBTS_Biped_BasicMobility_C::OnLoaded_809DC56944F42BE29C094A8145446EBA(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.OnLoaded_809DC56944F42BE29C094A8145446EBA"));
    struct Params_OnLoaded_809DC56944F42BE29C094A8145446EBA {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_809DC56944F42BE29C094A8145446EBA params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::MovementModeChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MovementModeChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_BasicMobility_C::ExecuteUbergraph_BTS_Biped_BasicMobility(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2) {}
