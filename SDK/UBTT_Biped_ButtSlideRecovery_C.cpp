#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSurfaceTypeChanged.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_ButtSlideRecovery_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_Biped_ButtSlideRecovery_C* UBTT_Biped_ButtSlideRecovery_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ButtSlideRecovery.BTT_Biped_ButtSlideRecovery_C");
    return (UBTT_Biped_ButtSlideRecovery_C*)res;
}
void UBTT_Biped_ButtSlideRecovery_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ButtSlideRecovery.BTT_Biped_ButtSlideRecovery_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ButtSlideRecovery_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ButtSlideRecovery.BTT_Biped_ButtSlideRecovery_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ButtSlideRecovery_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ButtSlideRecovery.BTT_Biped_ButtSlideRecovery_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ButtSlideRecovery_C::SurfaceTypeChanged(UObject* Caller, FSurfaceTypeChanged& SurfaceTypeChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ButtSlideRecovery.BTT_Biped_ButtSlideRecovery_C.SurfaceTypeChanged"));
    struct Params_SurfaceTypeChanged {
        UObject* Caller; // 0x0
        FSurfaceTypeChanged SurfaceTypeChanged; // 0x8
    }; // Size: 0x1c
    Params_SurfaceTypeChanged params{};
    params.Caller = (UObject*)Caller;
    params.SurfaceTypeChanged = (FSurfaceTypeChanged)SurfaceTypeChanged;
    ProcessEvent(func, &params);
    SurfaceTypeChanged = params.SurfaceTypeChanged;
}
void UBTT_Biped_ButtSlideRecovery_C::ExecuteUbergraph_BTT_Biped_ButtSlideRecovery(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
