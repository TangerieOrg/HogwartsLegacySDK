#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_Transition_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPawnMovementComponent.hpp"
#include "UUIManager.hpp"
void UBTT_Biped_Transition_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_Biped_Transition_C* UBTT_Biped_Transition_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C");
    return (UBTT_Biped_Transition_C*)res;
}
void UBTT_Biped_Transition_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::MakeSurePlayerIsOnGround(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_PlaceOnGround_ReturnValue, UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.MakeSurePlayerIsOnGround"));
    struct Params_MakeSurePlayerIsOnGround {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue; // 0x8
        bool CallFunc_PlaceOnGround_ReturnValue; // 0x10
        char pad_11[0x7];
        UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x21
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x22
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x23
        bool CallFunc_BooleanOR_ReturnValue; // 0x24
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x25
    }; // Size: 0x26
    Params_MakeSurePlayerIsOnGround params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetMovementComponent_ReturnValue = (UPawnMovementComponent*)CallFunc_GetMovementComponent_ReturnValue;
    params.CallFunc_PlaceOnGround_ReturnValue = (bool)CallFunc_PlaceOnGround_ReturnValue;
    params.K2Node_DynamicCast_AsCharacter_Movement_Component = (UCharacterMovementComponent*)K2Node_DynamicCast_AsCharacter_Movement_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::IgnoreInteractActor(bool Flag, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.IgnoreInteractActor"));
    struct Params_IgnoreInteractActor {
        bool Flag; // 0x0
        char pad_1[0x7];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x8
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        AActor* K2Node_DynamicCast_AsActor; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
    }; // Size: 0x31
    Params_IgnoreInteractActor params{};
    params.Flag = (bool)Flag;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.ToggleLockOnCamera"));
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
void UBTT_Biped_Transition_C::EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.EnableHUD"));
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
void UBTT_Biped_Transition_C::CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::ExecuteUbergraph_BTT_Biped_Transition(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue) {}
void UBTT_Biped_Transition_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Transition_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Transition.BTT_Biped_Transition_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
