#include "AActor.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UUI_BP_RotateActorPanel_C.hpp"
#include "UUMGFocusWidget.hpp"
void UUI_BP_RotateActorPanel_C::AddActorRotation(float DeltaYaw, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.AddActorRotation"));
    struct Params_AddActorRotation {
        float DeltaYaw; // 0x0
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x4
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x3];
        float CallFunc_BreakRotator_Roll; // 0x14
        float CallFunc_BreakRotator_Pitch; // 0x18
        float CallFunc_BreakRotator_Yaw; // 0x1c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x20
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x24
        bool CallFunc_K2_SetActorRotation_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_AddActorRotation params{};
    params.DeltaYaw = (float)DeltaYaw;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_SetActorRotation_ReturnValue = (bool)CallFunc_K2_SetActorRotation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RotateActorPanel_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
UUI_BP_RotateActorPanel_C* UUI_BP_RotateActorPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C");
    return (UUI_BP_RotateActorPanel_C*)res;
}
void UUI_BP_RotateActorPanel_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
bool UUI_BP_RotateActorPanel_C::BlueprintOnUMGInputAction0(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x7
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x8
    }; // Size: 0x9
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_RotateActorPanel_C::CalculateAnalogInput(float Stick, float LeftTrigger, float RightTrigger, float& AnalogInput, float UpperDeadzone, float RawInput, float LowerDeadzone, float CallFunc_Abs_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.CalculateAnalogInput"));
    struct Params_CalculateAnalogInput {
        float Stick; // 0x0
        float LeftTrigger; // 0x4
        float RightTrigger; // 0x8
        float AnalogInput; // 0xc
        float UpperDeadzone; // 0x10
        float RawInput; // 0x14
        float LowerDeadzone; // 0x18
        float CallFunc_Abs_ReturnValue; // 0x1c
        float CallFunc_SignOfFloat_ReturnValue; // 0x20
        float CallFunc_Abs_ReturnValue_1; // 0x24
        float CallFunc_MapRangeClamped_ReturnValue; // 0x28
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x2c
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x30
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0x34
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x38
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1; // 0x39
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2; // 0x3a
    }; // Size: 0x3b
    Params_CalculateAnalogInput params{};
    params.Stick = (float)Stick;
    params.LeftTrigger = (float)LeftTrigger;
    params.RightTrigger = (float)RightTrigger;
    params.AnalogInput = (float)AnalogInput;
    params.UpperDeadzone = (float)UpperDeadzone;
    params.RawInput = (float)RawInput;
    params.LowerDeadzone = (float)LowerDeadzone;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_SignOfFloat_ReturnValue = (float)CallFunc_SignOfFloat_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
    ProcessEvent(func, &params);
    AnalogInput = params.AnalogInput;
}
void UUI_BP_RotateActorPanel_C::BlueprintConsolidatedUMGInputAxis0(FUMGConsolidatedAxisInputData& AxisInputData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.BlueprintConsolidatedUMGInputAxis"));
    struct Params_BlueprintConsolidatedUMGInputAxis {
        FUMGConsolidatedAxisInputData AxisInputData; // 0x0
    }; // Size: 0x30
    Params_BlueprintConsolidatedUMGInputAxis params{};
    params.AxisInputData = (FUMGConsolidatedAxisInputData)AxisInputData;
    ProcessEvent(func, &params);
    AxisInputData = params.AxisInputData;
}
FEventReply UUI_BP_RotateActorPanel_C::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, FVector2D CallFunc_GetCursorPostion_ReturnValue, bool CallFunc_IsValid_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseButtonDown"));
    struct Params_OnMouseButtonDown {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
        FVector2D CallFunc_GetCursorPostion_ReturnValue; // 0x160
        bool CallFunc_IsValid_ReturnValue; // 0x168
        char pad_169[0x7];
        FEventReply CallFunc_Handled_ReturnValue; // 0x170
        bool CallFunc_BooleanAND_ReturnValue; // 0x228
    }; // Size: 0x229
    Params_OnMouseButtonDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    params.CallFunc_GetCursorPostion_ReturnValue = (FVector2D)CallFunc_GetCursorPostion_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
FEventReply UUI_BP_RotateActorPanel_C::OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent, FEventReply CallFunc_Handled_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseButtonUp"));
    struct Params_OnMouseButtonUp {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
        FEventReply CallFunc_Handled_ReturnValue; // 0x160
    }; // Size: 0x218
    Params_OnMouseButtonUp params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUI_BP_RotateActorPanel_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RotateActorPanel_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseEnter"));
    struct Params_OnMouseEnter {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
    }; // Size: 0xa8
    Params_OnMouseEnter params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_RotateActorPanel_C::OnMouseLeave(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_RotateActorPanel_C::ExecuteUbergraph_UI_BP_RotateActorPanel(int32_t EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, FVector2D CallFunc_GetCursorPostion_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_CalculateAnalogInput_AnalogInput, bool CallFunc_NotEqual_FloatFloat_ReturnValue, FPointerEvent K2Node_Event_MouseEvent, float CallFunc_Multiply_FloatFloat_ReturnValue, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, FGeometry K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_MathExpression_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.ExecuteUbergraph_UI_BP_RotateActorPanel"));
    struct Params_ExecuteUbergraph_UI_BP_RotateActorPanel {
        int32_t EntryPoint; // 0x0
        float CallFunc_Conv_BoolToFloat_ReturnValue; // 0x4
        FVector2D CallFunc_GetCursorPostion_ReturnValue; // 0x8
        FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue; // 0x10
        FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData; // 0x18
        float CallFunc_BreakVector2D_X; // 0x48
        float CallFunc_BreakVector2D_Y; // 0x4c
        float CallFunc_BreakVector2D_X_1; // 0x50
        float CallFunc_BreakVector2D_Y_1; // 0x54
        float CallFunc_CalculateAnalogInput_AnalogInput; // 0x58
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x5c
        char pad_5d[0x3];
        FPointerEvent K2Node_Event_MouseEvent; // 0x60
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xd0
        FGeometry K2Node_Event_MyGeometry; // 0xd4
        char pad_10c[0x4];
        FPointerEvent K2Node_Event_MouseEvent_1; // 0x110
        FGeometry K2Node_Event_MyGeometry_1; // 0x180
        float K2Node_Event_InDeltaTime; // 0x1b8
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x1bc
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0x1c0
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x1c4
        float CallFunc_FClamp_ReturnValue; // 0x1c8
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0x1cc
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x1d0
        char pad_1d1[0x3];
        float CallFunc_Conv_BoolToFloat_ReturnValue_1; // 0x1d4
        bool CallFunc_BooleanOR_ReturnValue; // 0x1d8
        char pad_1d9[0x3];
        float K2Node_MathExpression_ReturnValue; // 0x1dc
        float CallFunc_SelectFloat_ReturnValue; // 0x1e0
        float CallFunc_FInterpTo_ReturnValue; // 0x1e4
    }; // Size: 0x1e8
    Params_ExecuteUbergraph_UI_BP_RotateActorPanel params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Conv_BoolToFloat_ReturnValue = (float)CallFunc_Conv_BoolToFloat_ReturnValue;
    params.CallFunc_GetCursorPostion_ReturnValue = (FVector2D)CallFunc_GetCursorPostion_ReturnValue;
    params.CallFunc_Subtract_Vector2DVector2D_ReturnValue = (FVector2D)CallFunc_Subtract_Vector2DVector2D_ReturnValue;
    params.K2Node_Event_AxisInputData = (FUMGConsolidatedAxisInputData)K2Node_Event_AxisInputData;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_BreakVector2D_X_1 = (float)CallFunc_BreakVector2D_X_1;
    params.CallFunc_BreakVector2D_Y_1 = (float)CallFunc_BreakVector2D_Y_1;
    params.CallFunc_CalculateAnalogInput_AnalogInput = (float)CallFunc_CalculateAnalogInput_AnalogInput;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.K2Node_Event_MouseEvent = (FPointerEvent)K2Node_Event_MouseEvent;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_MouseEvent_1 = (FPointerEvent)K2Node_Event_MouseEvent_1;
    params.K2Node_Event_MyGeometry_1 = (FGeometry)K2Node_Event_MyGeometry_1;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_Conv_BoolToFloat_ReturnValue_1 = (float)CallFunc_Conv_BoolToFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_FInterpTo_ReturnValue = (float)CallFunc_FInterpTo_ReturnValue;
    ProcessEvent(func, &params);
}
