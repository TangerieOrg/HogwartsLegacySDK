#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UUMGFocusWidget.hpp"
class AActor;
#pragma pack(push, 1)
class UUI_BP_RotateActorPanel_C : public UUMGFocusWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
    bool IsMouseOver; // 0x2d0
    bool IsMouseDragging; // 0x2d1
    char pad_2d2[0x6];
    AActor* ActorToRotate; // 0x2d8
    FVector2D LastCursorPosition; // 0x2e0
    bool RotateLeftKeyHeld; // 0x2e8
    bool RotateRightKeyHeld; // 0x2e9
    bool InputAxisPressed; // 0x2ea
    char pad_2eb[0x1];
    float RotationDirection; // 0x2ec
    float MaxRotationSpeed; // 0x2f0
    float CurrentRotationSpeed; // 0x2f4
    float RotationSpeedMultiplier; // 0x2f8
    float MouseRotationScale; // 0x2fc
    float MouseMaxRotationSpeed; // 0x300
    float RotationInterpSpeed; // 0x304
    static UUI_BP_RotateActorPanel_C* StaticClass();
    bool BlueprintOnUMGInputAction0(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
    void AddActorRotation(float DeltaYaw, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
    void CalculateAnalogInput(float Stick, float LeftTrigger, float RightTrigger, float& AnalogInput, float UpperDeadzone, float RawInput, float LowerDeadzone, float CallFunc_Abs_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent, FEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, FVector2D CallFunc_GetCursorPostion_ReturnValue, bool CallFunc_IsValid_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void OnMouseLeave(FPointerEvent& MouseEvent);
    void BlueprintConsolidatedUMGInputAxis0(FUMGConsolidatedAxisInputData& AxisInputData);
    void Destruct();
    void ExecuteUbergraph_UI_BP_RotateActorPanel(int32_t EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, FVector2D CallFunc_GetCursorPostion_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_CalculateAnalogInput_AnalogInput, bool CallFunc_NotEqual_FloatFloat_ReturnValue, FPointerEvent K2Node_Event_MouseEvent, float CallFunc_Multiply_FloatFloat_ReturnValue, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, FGeometry K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_MathExpression_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
}; // Size: 0x308
#pragma pack(pop)
