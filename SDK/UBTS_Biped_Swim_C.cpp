#include "AActor.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTS_Biped_Swim_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTS_Biped_Swim_C* UBTS_Biped_Swim_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C");
    return (UBTS_Biped_Swim_C*)res;
}
void UBTS_Biped_Swim_C::PlaySwimAbility(UClass* SwimAbility, FName CallFunc_MakeLiteralName_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue) {}
void UBTS_Biped_Swim_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::CustActionEvt_Teleport_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_Teleport_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_Teleport_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Teleport_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::CustActionEvt_Protego_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::MovementModeChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MovementModeChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::LeafNodeSwitched() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.LeafNodeSwitched"));
    struct Params_LeafNodeSwitched {
    }; // Size: 0x0
    Params_LeafNodeSwitched params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Swim.BTS_Biped_Swim_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Swim_C::ExecuteUbergraph_BTS_Biped_Swim(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1) {}
