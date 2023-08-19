#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector2D.hpp"
#include "UBTT_Biped_SimpleInteraction_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUIManager.hpp"
void UBTT_Biped_SimpleInteraction_C::EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.EnableHUD"));
    struct Params_EnableHUD {
        bool Flag; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_EnableHUD params{};
    params.Flag = (bool)Flag;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_SimpleInteraction_C* UBTT_Biped_SimpleInteraction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C");
    return (UBTT_Biped_SimpleInteraction_C*)res;
}
void UBTT_Biped_SimpleInteraction_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::GetBlackboardVariables(FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.GetBlackboardVariables"));
    struct Params_GetBlackboardVariables {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x8
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
        UClass* CallFunc_GetValueAsClass_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        AActor* K2Node_DynamicCast_AsActor; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
    }; // Size: 0x31
    Params_GetBlackboardVariables params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsClass_ReturnValue = (UClass*)CallFunc_GetValueAsClass_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ToggleLockOnCamera"));
    struct Params_ToggleLockOnCamera {
        UObject* Object; // 0x0
        bool Allowed; // 0x8
        char pad_9[0x7];
        APawn* K2Node_DynamicCast_AsPawn; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AController* CallFunc_GetController_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_ToggleLockOnCamera params{};
    params.Object = (UObject*)Object;
    params.Allowed = (bool)Allowed;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SimpleInteraction_C::ExecuteUbergraph_BTT_Biped_SimpleInteraction(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle Temp_struct_Variable) {}
