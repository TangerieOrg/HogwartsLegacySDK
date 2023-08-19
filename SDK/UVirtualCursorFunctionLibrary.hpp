#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class APlayerController;
#pragma pack(push, 1)
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UVirtualCursorFunctionLibrary* StaticClass();
    static void SetCursorPostion(APlayerController* PC, float nx, float ny);
    static void SetCursorPositionDirect(APlayerController* PC, float nx, float ny);
    static void SetAllowMouseClickInput(bool Allow);
    static bool IsVirtualCursorEnabled();
    static bool IsCursorOverInteractableWidget();
    static bool GetIsUsingVirtualCursor();
    static bool GetIsStickTouched();
    static FVector2D GetCursorPostion();
    static FVector2D GetCursorPositionDirect();
    static FVector2D GetAnalogTriggerValues();
    static FVector2D GetAnalogRightValues();
    static FVector2D GetAnalogLeftValues();
    static void EnableVirtualCursor(APlayerController* PC);
    static void DisableVirtualCursor(APlayerController* PC);
}; // Size: 0x28
#pragma pack(pop)
