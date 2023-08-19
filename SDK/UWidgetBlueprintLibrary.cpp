#include "APlayerController.hpp"
#include "EColorVisionDeficiency.hpp"
#include "EMouseCursor\Type.hpp"
#include "EMouseLockMode.hpp"
#include "EWindowTitleBarMode.hpp"
#include "FAnalogInputEvent.hpp"
#include "FCharacterEvent.hpp"
#include "FEventReply.hpp"
#include "FInputEvent.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FLinearColor.hpp"
#include "FNavigationEvent.hpp"
#include "FPaintContext.hpp"
#include "FPointerEvent.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UDragDropOperation.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "USlateBrushAsset.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetBlueprintLibrary.hpp"
UWidgetBlueprintLibrary* UWidgetBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetBlueprintLibrary");
    return (UWidgetBlueprintLibrary*)res;
}
FEventReply UWidgetBlueprintLibrary::UnlockMouse(FEventReply& Reply) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse"));
    struct Params_UnlockMouse {
        FEventReply Reply; // 0x0
        FEventReply ReturnValue; // 0xb8
    }; // Size: 0x170
    Params_UnlockMouse params{};
    params.Reply = (FEventReply)Reply;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
FEventReply UWidgetBlueprintLibrary::SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition"));
    struct Params_SetMousePosition {
        FEventReply Reply; // 0x0
        FVector2D NewMousePosition; // 0xb8
        FEventReply ReturnValue; // 0xc0
    }; // Size: 0x178
    Params_SetMousePosition params{};
    params.Reply = (FEventReply)Reply;
    params.NewMousePosition = (FVector2D)NewMousePosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent"));
    struct Params_GetKeyEventFromAnalogInputEvent {
        FAnalogInputEvent Event; // 0x0
        FKeyEvent ReturnValue; // 0x40
    }; // Size: 0x78
    Params_GetKeyEventFromAnalogInputEvent params{};
    params.Event = (FAnalogInputEvent)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
    return (FKeyEvent)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetInputMode_GameOnly(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));
    struct Params_SetInputMode_GameOnly {
        APlayerController* PlayerController; // 0x0
    }; // Size: 0x8
    Params_SetInputMode_GameOnly params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FEventReply UWidgetBlueprintLibrary::Unhandled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.Unhandled"));
    struct Params_Unhandled {
        FEventReply ReturnValue; // 0x0
    }; // Size: 0xb8
    Params_Unhandled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(UClass* OperationClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation"));
    struct Params_CreateDragDropOperation {
        UClass* OperationClass; // 0x0
        UDragDropOperation* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateDragDropOperation params{};
    params.OperationClass = (UClass*)OperationClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDragDropOperation*)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate() {}
FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture"));
    struct Params_ReleaseJoystickCapture {
        FEventReply Reply; // 0x0
        bool bInAllJoysticks; // 0xb8
        char pad_b9[0x7];
        FEventReply ReturnValue; // 0xc0
    }; // Size: 0x178
    Params_ReleaseJoystickCapture params{};
    params.Reply = (FEventReply)Reply;
    params.bInAllJoysticks = (bool)bInAllJoysticks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState"));
    struct Params_SetWindowTitleBarState {
        UWidget* TitleBarContent; // 0x0
        EWindowTitleBarMode Mode; // 0x8
        bool bTitleBarDragEnabled; // 0x9
        bool bWindowButtonsVisible; // 0xa
        bool bTitleBarVisible; // 0xb
    }; // Size: 0xc
    Params_SetWindowTitleBarState params{};
    params.TitleBarContent = (UWidget*)TitleBarContent;
    params.Mode = (EWindowTitleBarMode)Mode;
    params.bTitleBarDragEnabled = (bool)bTitleBarDragEnabled;
    params.bWindowButtonsVisible = (bool)bWindowButtonsVisible;
    params.bTitleBarVisible = (bool)bTitleBarVisible;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive"));
    struct Params_SetWindowTitleBarCloseButtonActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetWindowTitleBarCloseButtonActive params{};
    params.bActive = (bool)bActive;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FEventReply UWidgetBlueprintLibrary::SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus"));
    struct Params_SetUserFocus {
        FEventReply Reply; // 0x0
        UWidget* FocusWidget; // 0xb8
        bool bInAllUsers; // 0xc0
        char pad_c1[0x7];
        FEventReply ReturnValue; // 0xc8
    }; // Size: 0x180
    Params_SetUserFocus params{};
    params.Reply = (FEventReply)Reply;
    params.FocusWidget = (UWidget*)FocusWidget;
    params.bInAllUsers = (bool)bInAllUsers;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));
    struct Params_SetInputMode_UIOnlyEx {
        APlayerController* PlayerController; // 0x0
        UWidget* InWidgetToFocus; // 0x8
        EMouseLockMode InMouseLockMode; // 0x10
    }; // Size: 0x11
    Params_SetInputMode_UIOnlyEx params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.InWidgetToFocus = (UWidget*)InWidgetToFocus;
    params.InMouseLockMode = (EMouseLockMode)InMouseLockMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed"));
    struct Params_DetectDragIfPressed {
        FPointerEvent PointerEvent; // 0x0
        UWidget* WidgetDetectingDrag; // 0x70
        FKey DragKey; // 0x78
        FEventReply ReturnValue; // 0x90
    }; // Size: 0x148
    Params_DetectDragIfPressed params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.WidgetDetectingDrag = (UWidget*)WidgetDetectingDrag;
    params.DragKey = (FKey)DragKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::DrawTextFormatted(FPaintContext& Context) {}
void UWidgetBlueprintLibrary::SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly"));
    struct Params_SetInputMode_UIOnly {
        APlayerController* Target; // 0x0
        UWidget* InWidgetToFocus; // 0x8
        bool bLockMouseToViewport; // 0x10
    }; // Size: 0x11
    Params_SetInputMode_UIOnly params{};
    params.Target = (APlayerController*)Target;
    params.InWidgetToFocus = (UWidget*)InWidgetToFocus;
    params.bLockMouseToViewport = (bool)bLockMouseToViewport;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWidgetBlueprintLibrary::DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DrawLine"));
    struct Params_DrawLine {
        FPaintContext Context; // 0x0
        FVector2D PositionA; // 0x30
        FVector2D PositionB; // 0x38
        FLinearColor Tint; // 0x40
        bool bAntiAlias; // 0x50
        char pad_51[0x3];
        float Thickness; // 0x54
    }; // Size: 0x58
    Params_DrawLine params{};
    params.Context = (FPaintContext)Context;
    params.PositionA = (FVector2D)PositionA;
    params.PositionB = (FVector2D)PositionB;
    params.Tint = (FLinearColor)Tint;
    params.bAntiAlias = (bool)bAntiAlias;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(FPointerEvent& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent"));
    struct Params_GetInputEventFromPointerEvent {
        FPointerEvent Event; // 0x0
        FInputEvent ReturnValue; // 0x70
    }; // Size: 0x88
    Params_GetInputEventFromPointerEvent params{};
    params.Event = (FPointerEvent)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
    return (FInputEvent)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));
    struct Params_SetInputMode_GameAndUIEx {
        APlayerController* PlayerController; // 0x0
        UWidget* InWidgetToFocus; // 0x8
        EMouseLockMode InMouseLockMode; // 0x10
        bool bHideCursorDuringCapture; // 0x11
    }; // Size: 0x12
    Params_SetInputMode_GameAndUIEx params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.InWidgetToFocus = (UWidget*)InWidgetToFocus;
    params.InMouseLockMode = (EMouseLockMode)InMouseLockMode;
    params.bHideCursorDuringCapture = (bool)bHideCursorDuringCapture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI"));
    struct Params_SetInputMode_GameAndUI {
        APlayerController* Target; // 0x0
        UWidget* InWidgetToFocus; // 0x8
        bool bLockMouseToViewport; // 0x10
        bool bHideCursorDuringCapture; // 0x11
    }; // Size: 0x12
    Params_SetInputMode_GameAndUI params{};
    params.Target = (APlayerController*)Target;
    params.InWidgetToFocus = (UWidget*)InWidgetToFocus;
    params.bLockMouseToViewport = (bool)bLockMouseToViewport;
    params.bHideCursorDuringCapture = (bool)bHideCursorDuringCapture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UWidgetBlueprintLibrary::SetHardwareCursor(UObject* WorldContextObject, EMouseCursor::Type CursorShape, FName CursorName, FVector2D HotSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor"));
    struct Params_SetHardwareCursor {
        UObject* WorldContextObject; // 0x0
        EMouseCursor::Type CursorShape; // 0x8
        char pad_9[0x3];
        FName CursorName; // 0xc
        FVector2D HotSpot; // 0x14
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SetHardwareCursor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CursorShape = (EMouseCursor::Type)CursorShape;
    params.CursorName = (FName)CursorName;
    params.HotSpot = (FVector2D)HotSpot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent"));
    struct Params_GetDragDroppingContent {
        UDragDropOperation* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDragDroppingContent params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDragDropOperation*)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetFocusToGameViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));
    struct Params_SetFocusToGameViewport {
    }; // Size: 0x0
    Params_SetFocusToGameViewport params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType"));
    struct Params_SetColorVisionDeficiencyType {
        EColorVisionDeficiency Type; // 0x0
        char pad_1[0x3];
        float Severity; // 0x4
        bool CorrectDeficiency; // 0x8
        bool ShowCorrectionWithDeficiency; // 0x9
    }; // Size: 0xa
    Params_SetColorVisionDeficiencyType params{};
    params.Type = (EColorVisionDeficiency)Type;
    params.Severity = (float)Severity;
    params.CorrectDeficiency = (bool)CorrectDeficiency;
    params.ShowCorrectionWithDeficiency = (bool)ShowCorrectionWithDeficiency;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(UMaterialInterface* Material, int32_t Width, int32_t Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial"));
    struct Params_MakeBrushFromMaterial {
        UMaterialInterface* Material; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
        FSlateBrush ReturnValue; // 0x10
    }; // Size: 0x98
    Params_MakeBrushFromMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
void UWidgetBlueprintLibrary::SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture"));
    struct Params_SetBrushResourceToTexture {
        FSlateBrush Brush; // 0x0
        UTexture2D* Texture; // 0x88
    }; // Size: 0x90
    Params_SetBrushResourceToTexture params{};
    params.Brush = (FSlateBrush)Brush;
    params.Texture = (UTexture2D*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
}
void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial"));
    struct Params_SetBrushResourceToMaterial {
        FSlateBrush Brush; // 0x0
        UMaterialInterface* Material; // 0x88
    }; // Size: 0x90
    Params_SetBrushResourceToMaterial params{};
    params.Brush = (FSlateBrush)Brush;
    params.Material = (UMaterialInterface*)Material;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
}
FEventReply UWidgetBlueprintLibrary::Handled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.Handled"));
    struct Params_Handled {
        FEventReply ReturnValue; // 0x0
    }; // Size: 0xb8
    Params_Handled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState"));
    struct Params_RestorePreviousWindowTitleBarState {
    }; // Size: 0x0
    Params_RestorePreviousWindowTitleBarState params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(FNavigationEvent& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent"));
    struct Params_GetInputEventFromNavigationEvent {
        FNavigationEvent Event; // 0x0
        FInputEvent ReturnValue; // 0x20
    }; // Size: 0x38
    Params_GetInputEventFromNavigationEvent params{};
    params.Event = (FNavigationEvent)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
    return (FInputEvent)params.ReturnValue;
}
FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(FEventReply& Reply) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture"));
    struct Params_ReleaseMouseCapture {
        FEventReply Reply; // 0x0
        FEventReply ReturnValue; // 0xb8
    }; // Size: 0x170
    Params_ReleaseMouseCapture params{};
    params.Reply = (FEventReply)Reply;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature"));
    struct Params_OnGameWindowCloseButtonClickedDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_OnGameWindowCloseButtonClickedDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush"));
    struct Params_NoResourceBrush {
        FSlateBrush ReturnValue; // 0x0
    }; // Size: 0x88
    Params_NoResourceBrush params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(UTexture2D* Texture, int32_t Width, int32_t Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture"));
    struct Params_MakeBrushFromTexture {
        UTexture2D* Texture; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
        FSlateBrush ReturnValue; // 0x10
    }; // Size: 0x98
    Params_MakeBrushFromTexture params{};
    params.Texture = (UTexture2D*)Texture;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
FEventReply UWidgetBlueprintLibrary::CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick"));
    struct Params_CaptureJoystick {
        FEventReply Reply; // 0x0
        UWidget* CapturingWidget; // 0xb8
        bool bInAllJoysticks; // 0xc0
        char pad_c1[0x7];
        FEventReply ReturnValue; // 0xc8
    }; // Size: 0x180
    Params_CaptureJoystick params{};
    params.Reply = (FEventReply)Reply;
    params.CapturingWidget = (UWidget*)CapturingWidget;
    params.bInAllJoysticks = (bool)bInAllJoysticks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(USlateBrushAsset* BrushAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset"));
    struct Params_MakeBrushFromAsset {
        USlateBrushAsset* BrushAsset; // 0x0
        FSlateBrush ReturnValue; // 0x8
    }; // Size: 0x90
    Params_MakeBrushFromAsset params{};
    params.BrushAsset = (USlateBrushAsset*)BrushAsset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
UUserWidget* UWidgetBlueprintLibrary::Create(UObject* WorldContextObject, UClass* WidgetType, APlayerController* OwningPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.Create"));
    struct Params_Create {
        UObject* WorldContextObject; // 0x0
        UClass* WidgetType; // 0x8
        APlayerController* OwningPlayer; // 0x10
        UUserWidget* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Create params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WidgetType = (UClass*)WidgetType;
    params.OwningPlayer = (APlayerController*)OwningPlayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
FEventReply UWidgetBlueprintLibrary::LockMouse(FEventReply& Reply, UWidget* CapturingWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.LockMouse"));
    struct Params_LockMouse {
        FEventReply Reply; // 0x0
        UWidget* CapturingWidget; // 0xb8
        FEventReply ReturnValue; // 0xc0
    }; // Size: 0x178
    Params_LockMouse params{};
    params.Reply = (FEventReply)Reply;
    params.CapturingWidget = (UWidget*)CapturingWidget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
bool UWidgetBlueprintLibrary::IsDragDropping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping"));
    struct Params_IsDragDropping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDragDropping params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(FKeyEvent& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent"));
    struct Params_GetInputEventFromKeyEvent {
        FKeyEvent Event; // 0x0
        FInputEvent ReturnValue; // 0x38
    }; // Size: 0x50
    Params_GetInputEventFromKeyEvent params{};
    params.Event = (FKeyEvent)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
    return (FInputEvent)params.ReturnValue;
}
void UWidgetBlueprintLibrary::GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding"));
    struct Params_GetSafeZonePadding {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FVector4 SafePadding; // 0x10
        FVector2D SafePaddingScale; // 0x20
        char pad_28[0x8];
        FVector4 SpillOverPadding; // 0x30
    }; // Size: 0x40
    Params_GetSafeZonePadding params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SafePadding = (FVector4)SafePadding;
    params.SafePaddingScale = (FVector2D)SafePaddingScale;
    params.SpillOverPadding = (FVector4)SpillOverPadding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SafePadding = params.SafePadding;
    SafePaddingScale = params.SafePaddingScale;
    SpillOverPadding = params.SpillOverPadding;
}
FEventReply UWidgetBlueprintLibrary::ClearUserFocus(FEventReply& Reply, bool bInAllUsers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus"));
    struct Params_ClearUserFocus {
        FEventReply Reply; // 0x0
        bool bInAllUsers; // 0xb8
        char pad_b9[0x7];
        FEventReply ReturnValue; // 0xc0
    }; // Size: 0x178
    Params_ClearUserFocus params{};
    params.Reply = (FEventReply)Reply;
    params.bInAllUsers = (bool)bInAllUsers;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(FCharacterEvent& Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent"));
    struct Params_GetInputEventFromCharacterEvent {
        FCharacterEvent Event; // 0x0
        FInputEvent ReturnValue; // 0x20
    }; // Size: 0x38
    Params_GetInputEventFromCharacterEvent params{};
    params.Event = (FCharacterEvent)Event;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Event = params.Event;
    return (FInputEvent)params.ReturnValue;
}
UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(FSlateBrush& Brush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D"));
    struct Params_GetBrushResourceAsTexture2D {
        FSlateBrush Brush; // 0x0
        UTexture2D* ReturnValue; // 0x88
    }; // Size: 0x90
    Params_GetBrushResourceAsTexture2D params{};
    params.Brush = (FSlateBrush)Brush;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
    return (UTexture2D*)params.ReturnValue;
}
UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(FSlateBrush& Brush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial"));
    struct Params_GetDynamicMaterial {
        FSlateBrush Brush; // 0x0
        UMaterialInstanceDynamic* ReturnValue; // 0x88
    }; // Size: 0x90
    Params_GetDynamicMaterial params{};
    params.Brush = (FSlateBrush)Brush;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(FSlateBrush& Brush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial"));
    struct Params_GetBrushResourceAsMaterial {
        FSlateBrush Brush; // 0x0
        UMaterialInterface* ReturnValue; // 0x88
    }; // Size: 0x90
    Params_GetBrushResourceAsMaterial params{};
    params.Brush = (FSlateBrush)Brush;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
    return (UMaterialInterface*)params.ReturnValue;
}
UObject* UWidgetBlueprintLibrary::GetBrushResource(FSlateBrush& Brush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource"));
    struct Params_GetBrushResource {
        FSlateBrush Brush; // 0x0
        UObject* ReturnValue; // 0x88
    }; // Size: 0x90
    Params_GetBrushResource params{};
    params.Brush = (FSlateBrush)Brush;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Brush = params.Brush;
    return (UObject*)params.ReturnValue;
}
void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* Interface, bool TopLevelOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface"));
    struct Params_GetAllWidgetsWithInterface {
        UObject* WorldContextObject; // 0x0
        TArray<UUserWidget*> FoundWidgets; // 0x8
        UClass* Interface; // 0x18
        bool TopLevelOnly; // 0x20
    }; // Size: 0x21
    Params_GetAllWidgetsWithInterface params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FoundWidgets = (TArray<UUserWidget*>)FoundWidgets;
    params.Interface = (UClass*)Interface;
    params.TopLevelOnly = (bool)TopLevelOnly;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FoundWidgets = params.FoundWidgets;
}
void UWidgetBlueprintLibrary::DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DrawLines"));
    struct Params_DrawLines {
        FPaintContext Context; // 0x0
        TArray<FVector2D> Points; // 0x30
        FLinearColor Tint; // 0x40
        bool bAntiAlias; // 0x50
        char pad_51[0x3];
        float Thickness; // 0x54
    }; // Size: 0x58
    Params_DrawLines params{};
    params.Context = (FPaintContext)Context;
    params.Points = (TArray<FVector2D>)Points;
    params.Tint = (FLinearColor)Tint;
    params.bAntiAlias = (bool)bAntiAlias;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
    Points = params.Points;
}
void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* WidgetClass, bool TopLevelOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass"));
    struct Params_GetAllWidgetsOfClass {
        UObject* WorldContextObject; // 0x0
        TArray<UUserWidget*> FoundWidgets; // 0x8
        UClass* WidgetClass; // 0x18
        bool TopLevelOnly; // 0x20
    }; // Size: 0x21
    Params_GetAllWidgetsOfClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FoundWidgets = (TArray<UUserWidget*>)FoundWidgets;
    params.WidgetClass = (UClass*)WidgetClass;
    params.TopLevelOnly = (bool)TopLevelOnly;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FoundWidgets = params.FoundWidgets;
}
FEventReply UWidgetBlueprintLibrary::EndDragDrop(FEventReply& Reply) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop"));
    struct Params_EndDragDrop {
        FEventReply Reply; // 0x0
        FEventReply ReturnValue; // 0xb8
    }; // Size: 0x170
    Params_EndDragDrop params{};
    params.Reply = (FEventReply)Reply;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DrawText"));
    struct Params_DrawText {
        FPaintContext Context; // 0x0
        FString inString; // 0x30
        FVector2D Position; // 0x40
        FLinearColor Tint; // 0x48
    }; // Size: 0x58
    Params_DrawText params{};
    params.Context = (FPaintContext)Context;
    params.inString = (FString)inString;
    params.Position = (FVector2D)Position;
    params.Tint = (FLinearColor)Tint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
void UWidgetBlueprintLibrary::DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DrawBox"));
    struct Params_DrawBox {
        FPaintContext Context; // 0x0
        FVector2D Position; // 0x30
        FVector2D Size; // 0x38
        USlateBrushAsset* Brush; // 0x40
        FLinearColor Tint; // 0x48
    }; // Size: 0x58
    Params_DrawBox params{};
    params.Context = (FPaintContext)Context;
    params.Position = (FVector2D)Position;
    params.Size = (FVector2D)Size;
    params.Brush = (USlateBrushAsset*)Brush;
    params.Tint = (FLinearColor)Tint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
void UWidgetBlueprintLibrary::DismissAllMenus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus"));
    struct Params_DismissAllMenus {
    }; // Size: 0x0
    Params_DismissAllMenus params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FEventReply UWidgetBlueprintLibrary::DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag"));
    struct Params_DetectDrag {
        FEventReply Reply; // 0x0
        UWidget* WidgetDetectingDrag; // 0xb8
        FKey DragKey; // 0xc0
        FEventReply ReturnValue; // 0xd8
    }; // Size: 0x190
    Params_DetectDrag params{};
    params.Reply = (FEventReply)Reply;
    params.WidgetDetectingDrag = (UWidget*)WidgetDetectingDrag;
    params.DragKey = (FKey)DragKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
FEventReply UWidgetBlueprintLibrary::CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse"));
    struct Params_CaptureMouse {
        FEventReply Reply; // 0x0
        UWidget* CapturingWidget; // 0xb8
        FEventReply ReturnValue; // 0xc0
    }; // Size: 0x178
    Params_CaptureMouse params{};
    params.Reply = (FEventReply)Reply;
    params.CapturingWidget = (UWidget*)CapturingWidget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reply = params.Reply;
    return (FEventReply)params.ReturnValue;
}
void UWidgetBlueprintLibrary::CancelDragDrop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop"));
    struct Params_CancelDragDrop {
    }; // Size: 0x0
    Params_CancelDragDrop params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
