#pragma once
#include <cstdint>
#include "ESlateGesture.hpp"
#include "EUINavigation.hpp"
#include "EUINavigationAction.hpp"
#include "FInputChord.hpp"
#include "FKey.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FPointerEvent;
struct FInputEvent;
struct FKeyEvent;
struct FAnalogInputEvent;
#pragma pack(push, 1)
class UKismetInputLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetInputLibrary* StaticClass();
    static bool PointerEvent_IsTouchEvent(FPointerEvent& Input);
    static bool PointerEvent_IsMouseButtonDown(FPointerEvent& Input, FKey MouseButton);
    static float PointerEvent_GetWheelDelta(FPointerEvent& Input);
    static int32_t PointerEvent_GetUserIndex(FPointerEvent& Input);
    static int32_t PointerEvent_GetTouchpadIndex(FPointerEvent& Input);
    static FVector2D PointerEvent_GetScreenSpacePosition(FPointerEvent& Input);
    static int32_t PointerEvent_GetPointerIndex(FPointerEvent& Input);
    static FVector2D PointerEvent_GetLastScreenSpacePosition(FPointerEvent& Input);
    static ESlateGesture PointerEvent_GetGestureType(FPointerEvent& Input);
    static FVector2D PointerEvent_GetGestureDelta(FPointerEvent& Input);
    static FKey PointerEvent_GetEffectingButton(FPointerEvent& Input);
    static FVector2D PointerEvent_GetCursorDelta(FPointerEvent& Input);
    static bool Key_IsVectorAxis(FKey& Key);
    static bool Key_IsValid(FKey& Key);
    static bool Key_IsMouseButton(FKey& Key);
    static bool Key_IsModifierKey(FKey& Key);
    static bool Key_IsKeyboardKey(FKey& Key);
    static bool Key_IsGamepadKey(FKey& Key);
    static bool Key_IsDigital(FKey& Key);
    static bool Key_IsButtonAxis(FKey& Key);
    static bool Key_IsAxis3D(FKey& Key);
    static bool Key_IsAxis2D(FKey& Key);
    static bool Key_IsAxis1D(FKey& Key);
    static bool Key_IsAnalog(FKey& Key);
    static EUINavigation Key_GetNavigationDirectionFromKey(FKeyEvent& InKeyEvent);
    static EUINavigation Key_GetNavigationDirectionFromAnalog(FAnalogInputEvent& InAnalogEvent);
    static EUINavigationAction Key_GetNavigationActionFromKey(FKeyEvent& InKeyEvent);
    static EUINavigationAction Key_GetNavigationAction(FKey& InKey);
    static void Key_GetDisplayName(FKey& Key);
    static bool InputEvent_IsShiftDown(FInputEvent& Input);
    static bool InputEvent_IsRightShiftDown(FInputEvent& Input);
    static bool InputEvent_IsRightControlDown(FInputEvent& Input);
    static bool InputEvent_IsRightCommandDown(FInputEvent& Input);
    static bool InputEvent_IsRightAltDown(FInputEvent& Input);
    static bool InputEvent_IsRepeat(FInputEvent& Input);
    static bool InputEvent_IsLeftShiftDown(FInputEvent& Input);
    static bool InputEvent_IsLeftControlDown(FInputEvent& Input);
    static bool InputEvent_IsLeftCommandDown(FInputEvent& Input);
    static bool InputEvent_IsLeftAltDown(FInputEvent& Input);
    static bool InputEvent_IsControlDown(FInputEvent& Input);
    static bool InputEvent_IsCommandDown(FInputEvent& Input);
    static bool InputEvent_IsAltDown(FInputEvent& Input);
    static void InputChord_GetDisplayName(FInputChord& Key);
    static int32_t GetUserIndex(FKeyEvent& Input);
    static FKey GetKey(FKeyEvent& Input);
    static float GetAnalogValue(FAnalogInputEvent& Input);
    static bool EqualEqual_KeyKey(FKey A, FKey B);
    static bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);
    static void CalibrateTilt();
}; // Size: 0x28
#pragma pack(pop)
