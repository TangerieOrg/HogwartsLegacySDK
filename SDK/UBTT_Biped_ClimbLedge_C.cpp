#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ABiped_Player.hpp"
#include "APlayerCameraManager.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_ClimbLedge_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
void UBTT_Biped_ClimbLedge_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_Biped_ClimbLedge_C* UBTT_Biped_ClimbLedge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C");
    return (UBTT_Biped_ClimbLedge_C*)res;
}
void UBTT_Biped_ClimbLedge_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::SetRightArmState(EClimbingLedgeState::Type ClimbLedgeState, ERightArmState::Type RightArmState, AActor* CallFunc_GetActorOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_Biped_ClimbLedge_C::ShouldAutoPullUp(bool& Result, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsCurrentLedgeAnOverhang_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ShouldAutoPullUp"));
    struct Params_ShouldAutoPullUp {
        bool Result; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_IsCurrentLedgeAnOverhang_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x11
        bool CallFunc_ActorHasTag_ReturnValue; // 0x12
        bool CallFunc_BooleanAND_ReturnValue; // 0x13
        bool CallFunc_BooleanOR_ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ShouldAutoPullUp params{};
    params.Result = (bool)Result;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsCurrentLedgeAnOverhang_ReturnValue = (bool)CallFunc_IsCurrentLedgeAnOverhang_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_ActorHasTag_ReturnValue = (bool)CallFunc_ActorHasTag_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
bool UBTT_Biped_ClimbLedge_C::ShouldFallOffLedge(ABiped_Character* Player, bool CallFunc_EvaluateFilterOnActor_ReturnValue, EClimbingLedgeState::Type CallFunc_GetClimbingLedgeState_OutType, FTransform CallFunc_GetOriginalLedgeTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FTransform CallFunc_GetLedgeTransform_LedgeTransform, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_Vector_Up_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_LessLess_VectorRotator_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ShouldFallOffLedge"));
    struct Params_ShouldFallOffLedge {
        ABiped_Character* Player; // 0x0
        bool ReturnValue; // 0x8
        bool CallFunc_EvaluateFilterOnActor_ReturnValue; // 0x9
        EClimbingLedgeState::Type CallFunc_GetClimbingLedgeState_OutType; // 0xa
        char pad_b[0x5];
        FTransform CallFunc_GetOriginalLedgeTransform_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x40
        char pad_41[0x3];
        FVector CallFunc_BreakTransform_Location; // 0x44
        FRotator CallFunc_BreakTransform_Rotation; // 0x50
        FVector CallFunc_BreakTransform_Scale; // 0x5c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x68
        char pad_69[0x7];
        FTransform CallFunc_GetLedgeTransform_LedgeTransform; // 0x70
        bool CallFunc_BooleanAND_ReturnValue; // 0xa0
        char pad_a1[0x3];
        FVector CallFunc_BreakTransform_Location_1; // 0xa4
        FRotator CallFunc_BreakTransform_Rotation_1; // 0xb0
        FVector CallFunc_BreakTransform_Scale_1; // 0xbc
        FVector CallFunc_Vector_Up_ReturnValue; // 0xc8
        float CallFunc_Dot_VectorVector_ReturnValue; // 0xd4
        bool CallFunc_IsValid_ReturnValue; // 0xd8
        char pad_d9[0x3];
        FVector CallFunc_LessLess_VectorRotator_ReturnValue; // 0xdc
        FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0xe8
        float CallFunc_Dot_VectorVector_ReturnValue_1; // 0xf4
        float CallFunc_Dot_VectorVector_ReturnValue_2; // 0xf8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xfc
        float CallFunc_Sqrt_ReturnValue; // 0x100
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x104
        float CallFunc_Acos_ReturnValue; // 0x108
        float CallFunc_RadiansToDegrees_ReturnValue; // 0x10c
        float CallFunc_Abs_ReturnValue; // 0x110
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x114
    }; // Size: 0x115
    Params_ShouldFallOffLedge params{};
    params.Player = (ABiped_Character*)Player;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue;
    params.CallFunc_GetClimbingLedgeState_OutType = (EClimbingLedgeState::Type)CallFunc_GetClimbingLedgeState_OutType;
    params.CallFunc_GetOriginalLedgeTransform_ReturnValue = (FTransform)CallFunc_GetOriginalLedgeTransform_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_GetLedgeTransform_LedgeTransform = (FTransform)CallFunc_GetLedgeTransform_LedgeTransform;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_Vector_Up_ReturnValue = (FVector)CallFunc_Vector_Up_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_LessLess_VectorRotator_ReturnValue = (FVector)CallFunc_LessLess_VectorRotator_ReturnValue;
    params.CallFunc_GreaterGreater_VectorRotator_ReturnValue = (FVector)CallFunc_GreaterGreater_VectorRotator_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue_1 = (float)CallFunc_Dot_VectorVector_ReturnValue_1;
    params.CallFunc_Dot_VectorVector_ReturnValue_2 = (float)CallFunc_Dot_VectorVector_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Sqrt_ReturnValue = (float)CallFunc_Sqrt_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Acos_ReturnValue = (float)CallFunc_Acos_ReturnValue;
    params.CallFunc_RadiansToDegrees_ReturnValue = (float)CallFunc_RadiansToDegrees_ReturnValue;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTT_Biped_ClimbLedge_C::CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, EJumpingType::Type CallFunc_GetJumpingType_OutType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.RevertMovementMode"));
    struct Params_RevertMovementMode {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        EJumpingType::Type CallFunc_GetJumpingType_OutType; // 0x11
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x12
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x13
        bool CallFunc_BooleanOR_ReturnValue; // 0x14
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x15
        bool CallFunc_Not_PreBool_ReturnValue; // 0x16
    }; // Size: 0x17
    Params_RevertMovementMode params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetJumpingType_OutType = (EJumpingType::Type)CallFunc_GetJumpingType_OutType;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::GetCameraRelativeDirection(float X, float Y, FVector& Direction, FVector CallFunc_Vector_Up_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.GetCameraRelativeDirection"));
    struct Params_GetCameraRelativeDirection {
        float X; // 0x0
        float Y; // 0x4
        FVector Direction; // 0x8
        FVector CallFunc_Vector_Up_ReturnValue; // 0x14
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x20
        FRotator CallFunc_GetCameraRotation_ReturnValue; // 0x28
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x34
        FVector CallFunc_GetRightVector_ReturnValue; // 0x40
        FVector CallFunc_ProjectVectorOnToPlane_ReturnValue; // 0x4c
        FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1; // 0x58
        FVector CallFunc_Normal_ReturnValue; // 0x64
        FVector CallFunc_Normal_ReturnValue_1; // 0x70
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x7c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x88
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x94
        FVector CallFunc_Normal_ReturnValue_2; // 0xa0
    }; // Size: 0xac
    Params_GetCameraRelativeDirection params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Direction = (FVector)Direction;
    params.CallFunc_Vector_Up_ReturnValue = (FVector)CallFunc_Vector_Up_ReturnValue;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_GetCameraRotation_ReturnValue = (FRotator)CallFunc_GetCameraRotation_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.CallFunc_ProjectVectorOnToPlane_ReturnValue = (FVector)CallFunc_ProjectVectorOnToPlane_ReturnValue;
    params.CallFunc_ProjectVectorOnToPlane_ReturnValue_1 = (FVector)CallFunc_ProjectVectorOnToPlane_ReturnValue_1;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_Normal_ReturnValue_1 = (FVector)CallFunc_Normal_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue_2 = (FVector)CallFunc_Normal_ReturnValue_2;
    ProcessEvent(func, &params);
    Direction = params.Direction;
}
void UBTT_Biped_ClimbLedge_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLedge.BTT_Biped_ClimbLedge_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLedge_C::ExecuteUbergraph_BTT_Biped_ClimbLedge(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess) {}
