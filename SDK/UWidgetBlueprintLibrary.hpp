#pragma once
#include <cstdint>
#include "EColorVisionDeficiency.hpp"
#include "EMouseCursor\Type.hpp"
#include "EMouseLockMode.hpp"
#include "EWindowTitleBarMode.hpp"
#include "FEventReply.hpp"
#include "FInputEvent.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class USlateBrushAsset;
class UMaterialInterface;
class APlayerController;
class UWidget;
class UTexture2D;
class UObject;
struct FVector4;
struct FAnalogInputEvent;
struct FPointerEvent;
class UClass;
struct FNavigationEvent;
struct FCharacterEvent;
class UMaterialInstanceDynamic;
class UDragDropOperation;
class UUserWidget;
struct FPaintContext;
#pragma pack(push, 1)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UWidgetBlueprintLibrary* StaticClass();
    static FEventReply UnlockMouse(FEventReply& Reply);
    static FEventReply Unhandled();
    static void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    static void SetWindowTitleBarOnCloseClickedDelegate();
    static void SetWindowTitleBarCloseButtonActive(bool bActive);
    static FEventReply SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);
    static FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);
    static void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    static void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    static void SetInputMode_GameOnly(APlayerController* PlayerController);
    static void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    static void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    static bool SetHardwareCursor(UObject* WorldContextObject, EMouseCursor::Type CursorShape, FName CursorName, FVector2D HotSpot);
    static void SetFocusToGameViewport();
    static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    static void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture);
    static void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material);
    static void RestorePreviousWindowTitleBarState();
    static FEventReply ReleaseMouseCapture(FEventReply& Reply);
    static FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);
    void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
    static FSlateBrush NoResourceBrush();
    static FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32_t Width, int32_t Height);
    static FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32_t Width, int32_t Height);
    static FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
    static FEventReply LockMouse(FEventReply& Reply, UWidget* CapturingWidget);
    static bool IsDragDropping();
    static FEventReply Handled();
    static void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    static FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);
    static FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);
    static FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);
    static FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);
    static FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);
    static UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);
    static UDragDropOperation* GetDragDroppingContent();
    static UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);
    static UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);
    static UObject* GetBrushResource(FSlateBrush& Brush);
    static void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* Interface, bool TopLevelOnly);
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* WidgetClass, bool TopLevelOnly);
    static FEventReply EndDragDrop(FEventReply& Reply);
    static void DrawTextFormatted(FPaintContext& Context);
    static void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);
    static void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
    static void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
    static void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);
    static void DismissAllMenus();
    static FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
    static FEventReply DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);
    static UDragDropOperation* CreateDragDropOperation(UClass* OperationClass);
    static UUserWidget* Create(UObject* WorldContextObject, UClass* WidgetType, APlayerController* OwningPlayer);
    static FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);
    static FEventReply CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget);
    static FEventReply CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);
    static void CancelDragDrop();
}; // Size: 0x28
#pragma pack(pop)
