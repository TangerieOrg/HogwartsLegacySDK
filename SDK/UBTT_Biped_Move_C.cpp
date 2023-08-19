#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Move_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_Biped_Move_C* UBTT_Biped_Move_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C");
    return (UBTT_Biped_Move_C*)res;
}
void UBTT_Biped_Move_C::CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.StickValid"));
    struct Params_StickValid {
        float StickX; // 0x0
        float StickY; // 0x4
        bool IsValid; // 0x8
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x9
        bool CallFunc_NotEqual_FloatFloat_ReturnValue_1; // 0xa
        bool CallFunc_BooleanOR_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_StickValid params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    params.IsValid = (bool)IsValid;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    IsValid = params.IsValid;
}
void UBTT_Biped_Move_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Move.BTT_Biped_Move_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Move_C::ExecuteUbergraph_BTT_Biped_Move(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds) {}
