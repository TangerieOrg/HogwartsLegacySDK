#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_Reaction_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_Biped_Reaction_C* UBTT_Biped_Reaction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C");
    return (UBTT_Biped_Reaction_C*)res;
}
void UBTT_Biped_Reaction_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::SetAutoTargetDirection(ABiped_Player* BipedPlayer) {}
void UBTT_Biped_Reaction_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::RetrieveValuesFromBlackboard(AActor* Owner, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_4, FVector CallFunc_Vector_Normal2D_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, UClass* K2Node_ClassDynamicCast_AsAbl_Ability, bool K2Node_ClassDynamicCast_bSuccess, FVector CallFunc_GetValueAsVector_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue_1, FName CallFunc_GetValueAsName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.RetrieveValuesFromBlackboard"));
    struct Params_RetrieveValuesFromBlackboard {
        AActor* Owner; // 0x0
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x8
        char pad_9[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0xc
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x18
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x20
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x28
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x30
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x38
        FName CallFunc_MakeLiteralName_ReturnValue_3; // 0x44
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x4c
        FName CallFunc_MakeLiteralName_ReturnValue_4; // 0x58
        FVector CallFunc_Vector_Normal2D_ReturnValue; // 0x60
        char pad_6c[0x4];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x70
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x78
        UClass* CallFunc_GetValueAsClass_ReturnValue; // 0x80
        AActor* K2Node_DynamicCast_AsActor; // 0x88
        bool K2Node_DynamicCast_bSuccess; // 0x90
        char pad_91[0x7];
        UClass* K2Node_ClassDynamicCast_AsAbl_Ability; // 0x98
        bool K2Node_ClassDynamicCast_bSuccess; // 0xa0
        char pad_a1[0x3];
        FVector CallFunc_GetValueAsVector_ReturnValue; // 0xa4
        FVector CallFunc_GetValueAsVector_ReturnValue_1; // 0xb0
        FName CallFunc_GetValueAsName_ReturnValue; // 0xbc
    }; // Size: 0xc4
    Params_RetrieveValuesFromBlackboard params{};
    params.Owner = (AActor*)Owner;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_3 = (FName)CallFunc_MakeLiteralName_ReturnValue_3;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_4 = (FName)CallFunc_MakeLiteralName_ReturnValue_4;
    params.CallFunc_Vector_Normal2D_ReturnValue = (FVector)CallFunc_Vector_Normal2D_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.CallFunc_GetValueAsClass_ReturnValue = (UClass*)CallFunc_GetValueAsClass_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_ClassDynamicCast_AsAbl_Ability = (UClass*)K2Node_ClassDynamicCast_AsAbl_Ability;
    params.K2Node_ClassDynamicCast_bSuccess = (bool)K2Node_ClassDynamicCast_bSuccess;
    params.CallFunc_GetValueAsVector_ReturnValue = (FVector)CallFunc_GetValueAsVector_ReturnValue;
    params.CallFunc_GetValueAsVector_ReturnValue_1 = (FVector)CallFunc_GetValueAsVector_ReturnValue_1;
    params.CallFunc_GetValueAsName_ReturnValue = (FName)CallFunc_GetValueAsName_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_12"));
    struct Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_10"));
    struct Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15"));
    struct Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_14"));
    struct Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_14 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_14 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13"));
    struct Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11"));
    struct Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9"));
    struct Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_8"));
    struct Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7"));
    struct Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_6"));
    struct Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5"));
    struct Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_4"));
    struct Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::ExecuteUbergraph_BTT_Biped_Reaction(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, FName Temp_name_Variable, FVariantMapHandle Temp_struct_Variable, AActor* K2Node_Event_OwnerActor_2, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_Reaction_C::InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Reaction_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Reaction.BTT_Biped_Reaction_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
