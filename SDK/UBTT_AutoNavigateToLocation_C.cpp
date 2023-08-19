#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "AController.hpp"
#include "ASocialTravelerController.hpp"
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_AutoNavigateToLocation_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
UBTT_AutoNavigateToLocation_C* UBTT_AutoNavigateToLocation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C");
    return (UBTT_AutoNavigateToLocation_C*)res;
}
void UBTT_AutoNavigateToLocation_C::StationConnectionTransform(UBlackboardComponent* ActorBlackboard, bool& IsStation, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_GetConnectionStartTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Conv_RotatorToVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.StationConnectionTransform"));
    struct Params_StationConnectionTransform {
        UBlackboardComponent* ActorBlackboard; // 0x0
        bool IsStation; // 0x8
        char pad_9[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0xc
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x14
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x1c
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0xf];
        FTransform CallFunc_GetConnectionStartTransform_ReturnValue; // 0x40
        FVector CallFunc_BreakTransform_Location; // 0x70
        FRotator CallFunc_BreakTransform_Rotation; // 0x7c
        FVector CallFunc_BreakTransform_Scale; // 0x88
        FVector CallFunc_Conv_RotatorToVector_ReturnValue; // 0x94
    }; // Size: 0xa0
    Params_StationConnectionTransform params{};
    params.ActorBlackboard = (UBlackboardComponent*)ActorBlackboard;
    params.IsStation = (bool)IsStation;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetConnectionStartTransform_ReturnValue = (FTransform)CallFunc_GetConnectionStartTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Conv_RotatorToVector_ReturnValue = (FVector)CallFunc_Conv_RotatorToVector_ReturnValue;
    ProcessEvent(func, &params);
    IsStation = params.IsStation;
}
void UBTT_AutoNavigateToLocation_C::NavStage_Sprint2Jog(ABiped_Character* BipedCharacter, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Sprint2Jog"));
    struct Params_NavStage_Sprint2Jog {
        ABiped_Character* BipedCharacter; // 0x0
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_NavStage_Sprint2Jog params{};
    params.BipedCharacter = (ABiped_Character*)BipedCharacter;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::NavStage_Final(ABiped_Character* BipedCharacter, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_VSizeXY_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Final"));
    struct Params_NavStage_Final {
        ABiped_Character* BipedCharacter; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x14
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x20
        float CallFunc_Dot_VectorVector_ReturnValue; // 0x2c
        float CallFunc_VSizeXY_ReturnValue; // 0x30
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x34
        char pad_35[0x3];
        float CallFunc_Dot_VectorVector_ReturnValue_1; // 0x38
        float CallFunc_Dot_VectorVector_ReturnValue_2; // 0x3c
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x40
        float CallFunc_Sqrt_ReturnValue; // 0x44
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x48
        float CallFunc_Acos_ReturnValue; // 0x4c
        float CallFunc_RadiansToDegrees_ReturnValue; // 0x50
        bool CallFunc_LessEqual_FloatFloat_ReturnValue_1; // 0x54
        bool CallFunc_BooleanAND_ReturnValue; // 0x55
    }; // Size: 0x56
    Params_NavStage_Final params{};
    params.BipedCharacter = (ABiped_Character*)BipedCharacter;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_VSizeXY_ReturnValue = (float)CallFunc_VSizeXY_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue_1 = (float)CallFunc_Dot_VectorVector_ReturnValue_1;
    params.CallFunc_Dot_VectorVector_ReturnValue_2 = (float)CallFunc_Dot_VectorVector_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Sqrt_ReturnValue = (float)CallFunc_Sqrt_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Acos_ReturnValue = (float)CallFunc_Acos_ReturnValue;
    params.CallFunc_RadiansToDegrees_ReturnValue = (float)CallFunc_RadiansToDegrees_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::NavStage_SprintOrJog(ABiped_Character* BipedCharacter) {}
void UBTT_AutoNavigateToLocation_C::NavStage_Walk(ABiped_Character* BipedCharacter, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Walk"));
    struct Params_NavStage_Walk {
        ABiped_Character* BipedCharacter; // 0x0
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_NavStage_Walk params{};
    params.BipedCharacter = (ABiped_Character*)BipedCharacter;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::NavStage_Jog2Walk(ABiped_Character* BipedCharacter, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Jog2Walk"));
    struct Params_NavStage_Jog2Walk {
        ABiped_Character* BipedCharacter; // 0x0
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_NavStage_Jog2Walk params{};
    params.BipedCharacter = (ABiped_Character*)BipedCharacter;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::GetPathDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.GetPathDistance"));
    struct Params_GetPathDistance {
    }; // Size: 0x0
    Params_GetPathDistance params{};
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::TimeExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.TimeExpired"));
    struct Params_TimeExpired {
    }; // Size: 0x0
    Params_TimeExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_AutoNavigateToLocation_C::ExecuteUbergraph_BTT_AutoNavigateToLocation(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, bool CallFunc_StationConnectionTransform_IsStation, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, AActor* K2Node_Event_OwnerActor_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue) {}
