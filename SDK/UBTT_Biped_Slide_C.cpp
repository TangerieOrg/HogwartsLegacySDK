#include "AActor.hpp"
#include "EPhysicalSurface.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UBTT_Biped_Slide_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_Slide_C* UBTT_Biped_Slide_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C");
    return (UBTT_Biped_Slide_C*)res;
}
void UBTT_Biped_Slide_C::TimerComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.TimerComplete"));
    struct Params_TimerComplete {
    }; // Size: 0x0
    Params_TimerComplete params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::InpActEvt_JumpButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::SpawnRock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.SpawnRock"));
    struct Params_SpawnRock {
    }; // Size: 0x0
    Params_SpawnRock params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::AllowJumping() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Slide.BTT_Biped_Slide_C.AllowJumping"));
    struct Params_AllowJumping {
    }; // Size: 0x0
    Params_AllowJumping params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Slide_C::ExecuteUbergraph_BTT_Biped_Slide(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue) {}
