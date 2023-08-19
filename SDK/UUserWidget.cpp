#include "APawn.hpp"
#include "APlayerCameraManager.hpp"
#include "APlayerController.hpp"
#include "EInputEvent.hpp"
#include "EUMGSequencePlayMode\Type.hpp"
#include "EWidgetTickFrequency.hpp"
#include "FAnalogInputEvent.hpp"
#include "FAnchors.hpp"
#include "FAnimationEventBinding.hpp"
#include "FCharacterEvent.hpp"
#include "FEventReply.hpp"
#include "FFocusEvent.hpp"
#include "FGeometry.hpp"
#include "FKeyEvent.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FMotionEvent.hpp"
#include "FNamedSlotBinding.hpp"
#include "FPaintContext.hpp"
#include "FPointerEvent.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UDragDropOperation.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "USoundBase.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUMGSequenceTickManager.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetTree.hpp"
UUserWidget* UUserWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UserWidget");
    return (UUserWidget*)res;
}
void UUserWidget::UnregisterInputComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.UnregisterInputComponent"));
    struct Params_UnregisterInputComponent {
    }; // Size: 0x0
    Params_UnregisterInputComponent params{};
    ProcessEvent(func, &params);
}
void UUserWidget::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UUserWidget::StopListeningForInputAction(FName ActionName, EInputEvent EventType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.StopListeningForInputAction"));
    struct Params_StopListeningForInputAction {
        FName ActionName; // 0x0
        EInputEvent EventType; // 0x8
    }; // Size: 0x9
    Params_StopListeningForInputAction params{};
    params.ActionName = (FName)ActionName;
    params.EventType = (EInputEvent)EventType;
    ProcessEvent(func, &params);
}
void UUserWidget::UnbindFromAnimationStarted(UWidgetAnimation* Animation) {}
FEventReply UUserWidget::OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnTouchForceChanged"));
    struct Params_OnTouchForceChanged {
        FGeometry MyGeometry; // 0x0
        FPointerEvent InTouchEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnTouchForceChanged params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InTouchEvent = (FPointerEvent)InTouchEvent;
    ProcessEvent(func, &params);
    InTouchEvent = params.InTouchEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::SetAnchorsInViewport(FAnchors Anchors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetAnchorsInViewport"));
    struct Params_SetAnchorsInViewport {
        FAnchors Anchors; // 0x0
    }; // Size: 0x10
    Params_SetAnchorsInViewport params{};
    params.Anchors = (FAnchors)Anchors;
    ProcessEvent(func, &params);
}
void UUserWidget::UnbindAllFromAnimationFinished(UWidgetAnimation* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished"));
    struct Params_UnbindAllFromAnimationFinished {
        UWidgetAnimation* Animation; // 0x0
    }; // Size: 0x8
    Params_UnbindAllFromAnimationFinished params{};
    params.Animation = (UWidgetAnimation*)Animation;
    ProcessEvent(func, &params);
}
void UUserWidget::UnbindFromAnimationFinished(UWidgetAnimation* Animation) {}
void UUserWidget::UnbindAllFromAnimationStarted(UWidgetAnimation* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted"));
    struct Params_UnbindAllFromAnimationStarted {
        UWidgetAnimation* Animation; // 0x0
    }; // Size: 0x8
    Params_UnbindAllFromAnimationStarted params{};
    params.Animation = (UWidgetAnimation*)Animation;
    ProcessEvent(func, &params);
}
void UUserWidget::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUserWidget::SetOwningPlayer(APlayerController* LocalPlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetOwningPlayer"));
    struct Params_SetOwningPlayer {
        APlayerController* LocalPlayerController; // 0x0
    }; // Size: 0x8
    Params_SetOwningPlayer params{};
    params.LocalPlayerController = (APlayerController*)LocalPlayerController;
    ProcessEvent(func, &params);
}
void UUserWidget::StopListeningForAllInputActions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.StopListeningForAllInputActions"));
    struct Params_StopListeningForAllInputActions {
    }; // Size: 0x0
    Params_StopListeningForAllInputActions params{};
    ProcessEvent(func, &params);
}
void UUserWidget::SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetAnimationCurrentTime"));
    struct Params_SetAnimationCurrentTime {
        UWidgetAnimation* InAnimation; // 0x0
        float InTime; // 0x8
    }; // Size: 0xc
    Params_SetAnimationCurrentTime params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
}
void UUserWidget::StopAnimationsAndLatentActions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions"));
    struct Params_StopAnimationsAndLatentActions {
    }; // Size: 0x0
    Params_StopAnimationsAndLatentActions params{};
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnKeyDown"));
    struct Params_OnKeyDown {
        FGeometry MyGeometry; // 0x0
        FKeyEvent InKeyEvent; // 0x38
        FEventReply ReturnValue; // 0x70
    }; // Size: 0x128
    Params_OnKeyDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUserWidget::StopAnimation(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.StopAnimation"));
    struct Params_StopAnimation {
        UWidgetAnimation* InAnimation; // 0x0
    }; // Size: 0x8
    Params_StopAnimation params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
}
void UUserWidget::StopAllAnimations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.StopAllAnimations"));
    struct Params_StopAllAnimations {
    }; // Size: 0x0
    Params_StopAllAnimations params{};
    ProcessEvent(func, &params);
}
void UUserWidget::SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetPositionInViewport"));
    struct Params_SetPositionInViewport {
        FVector2D Position; // 0x0
        bool bRemoveDPIScale; // 0x8
    }; // Size: 0x9
    Params_SetPositionInViewport params{};
    params.Position = (FVector2D)Position;
    params.bRemoveDPIScale = (bool)bRemoveDPIScale;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseButtonDown"));
    struct Params_OnMouseButtonDown {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnMouseButtonDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetPlaybackSpeed"));
    struct Params_SetPlaybackSpeed {
        UWidgetAnimation* InAnimation; // 0x0
        float PlaybackSpeed; // 0x8
    }; // Size: 0xc
    Params_SetPlaybackSpeed params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnFocusReceived"));
    struct Params_OnFocusReceived {
        FGeometry MyGeometry; // 0x0
        FFocusEvent InFocusEvent; // 0x38
        FEventReply ReturnValue; // 0x40
    }; // Size: 0xf8
    Params_OnFocusReceived params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetNumLoopsToPlay"));
    struct Params_SetNumLoopsToPlay {
        UWidgetAnimation* InAnimation; // 0x0
        int32_t NumLoopsToPlay; // 0x8
    }; // Size: 0xc
    Params_SetNumLoopsToPlay params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    ProcessEvent(func, &params);
}
void UUserWidget::SetInputActionPriority(int32_t NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetInputActionPriority"));
    struct Params_SetInputActionPriority {
        int32_t NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetInputActionPriority params{};
    params.NewPriority = (int32_t)NewPriority;
    ProcessEvent(func, &params);
}
UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed, bool bRestoreState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PlayAnimationTimeRange"));
    struct Params_PlayAnimationTimeRange {
        UWidgetAnimation* InAnimation; // 0x0
        float StartAtTime; // 0x8
        float EndAtTime; // 0xc
        int32_t NumLoopsToPlay; // 0x10
        EUMGSequencePlayMode::Type PlayMode; // 0x14
        char pad_15[0x3];
        float PlaybackSpeed; // 0x18
        bool bRestoreState; // 0x1c
        char pad_1d[0x3];
        UUMGSequencePlayer* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_PlayAnimationTimeRange params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.StartAtTime = (float)StartAtTime;
    params.EndAtTime = (float)EndAtTime;
    params.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    params.PlayMode = (EUMGSequencePlayMode::Type)PlayMode;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    params.bRestoreState = (bool)bRestoreState;
    ProcessEvent(func, &params);
    return (UUMGSequencePlayer*)params.ReturnValue;
}
void UUserWidget::SetInputActionBlocking(bool bShouldBlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetInputActionBlocking"));
    struct Params_SetInputActionBlocking {
        bool bShouldBlock; // 0x0
    }; // Size: 0x1
    Params_SetInputActionBlocking params{};
    params.bShouldBlock = (bool)bShouldBlock;
    ProcessEvent(func, &params);
}
bool UUserWidget::GetIsVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetIsVisible"));
    struct Params_GetIsVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUserWidget::IsInViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsInViewport"));
    struct Params_IsInViewport {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInViewport params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUserWidget::SetForegroundColor(FSlateColor InForegroundColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetForegroundColor"));
    struct Params_SetForegroundColor {
        FSlateColor InForegroundColor; // 0x0
    }; // Size: 0x28
    Params_SetForegroundColor params{};
    params.InForegroundColor = (FSlateColor)InForegroundColor;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnAnalogValueChanged"));
    struct Params_OnAnalogValueChanged {
        FGeometry MyGeometry; // 0x0
        FAnalogInputEvent InAnalogInputEvent; // 0x38
        FEventReply ReturnValue; // 0x78
    }; // Size: 0x130
    Params_OnAnalogValueChanged params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InAnalogInputEvent = (FAnalogInputEvent)InAnalogInputEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::SetDesiredSizeInViewport(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetDesiredSizeInViewport"));
    struct Params_SetDesiredSizeInViewport {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_SetDesiredSizeInViewport params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseButtonUp"));
    struct Params_OnMouseButtonUp {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnMouseButtonUp params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetColorAndOpacity"));
    struct Params_SetColorAndOpacity {
        FLinearColor InColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetColorAndOpacity params{};
    params.InColorAndOpacity = (FLinearColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
bool UUserWidget::OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDragOver"));
    struct Params_OnDragOver {
        FGeometry MyGeometry; // 0x0
        FPointerEvent PointerEvent; // 0x38
        UDragDropOperation* Operation; // 0xa8
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_OnDragOver params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUserWidget::SetAlignmentInViewport(FVector2D Alignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.SetAlignmentInViewport"));
    struct Params_SetAlignmentInViewport {
        FVector2D Alignment; // 0x0
    }; // Size: 0x8
    Params_SetAlignmentInViewport params{};
    params.Alignment = (FVector2D)Alignment;
    ProcessEvent(func, &params);
}
void UUserWidget::OnFocusLost(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnFocusLost"));
    struct Params_OnFocusLost {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnFocusLost params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseWheel"));
    struct Params_OnMouseWheel {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnMouseWheel params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::ReverseAnimation(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.ReverseAnimation"));
    struct Params_ReverseAnimation {
        UWidgetAnimation* InAnimation; // 0x0
    }; // Size: 0x8
    Params_ReverseAnimation params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
}
void UUserWidget::OnAddedToFocusPath(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnAddedToFocusPath"));
    struct Params_OnAddedToFocusPath {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnAddedToFocusPath params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
void UUserWidget::RemoveFromViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.RemoveFromViewport"));
    struct Params_RemoveFromViewport {
    }; // Size: 0x0
    Params_RemoveFromViewport params{};
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnTouchStarted"));
    struct Params_OnTouchStarted {
        FGeometry MyGeometry; // 0x0
        FPointerEvent InTouchEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnTouchStarted params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InTouchEvent = (FPointerEvent)InTouchEvent;
    ProcessEvent(func, &params);
    InTouchEvent = params.InTouchEvent;
    return (FEventReply)params.ReturnValue;
}
FEventReply UUserWidget::OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMotionDetected"));
    struct Params_OnMotionDetected {
        FGeometry MyGeometry; // 0x0
        FMotionEvent InMotionEvent; // 0x38
        FEventReply ReturnValue; // 0x80
    }; // Size: 0x138
    Params_OnMotionDetected params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InMotionEvent = (FMotionEvent)InMotionEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::RegisterInputComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.RegisterInputComponent"));
    struct Params_RegisterInputComponent {
    }; // Size: 0x0
    Params_RegisterInputComponent params{};
    ProcessEvent(func, &params);
}
void UUserWidget::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnKeyChar"));
    struct Params_OnKeyChar {
        FGeometry MyGeometry; // 0x0
        FCharacterEvent InCharacterEvent; // 0x38
        FEventReply ReturnValue; // 0x58
    }; // Size: 0x110
    Params_OnKeyChar params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InCharacterEvent = (FCharacterEvent)InCharacterEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PlayAnimationReverse"));
    struct Params_PlayAnimationReverse {
        UWidgetAnimation* InAnimation; // 0x0
        float PlaybackSpeed; // 0x8
        bool bRestoreState; // 0xc
        char pad_d[0x3];
        UUMGSequencePlayer* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlayAnimationReverse params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    params.bRestoreState = (bool)bRestoreState;
    ProcessEvent(func, &params);
    return (UUMGSequencePlayer*)params.ReturnValue;
}
void UUserWidget::PlaySound(USoundBase* SoundToPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PlaySound"));
    struct Params_PlaySound {
        USoundBase* SoundToPlay; // 0x0
    }; // Size: 0x8
    Params_PlaySound params{};
    params.SoundToPlay = (USoundBase*)SoundToPlay;
    ProcessEvent(func, &params);
}
UUMGSequencePlayer* UUserWidget::PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PlayAnimationForward"));
    struct Params_PlayAnimationForward {
        UWidgetAnimation* InAnimation; // 0x0
        float PlaybackSpeed; // 0x8
        bool bRestoreState; // 0xc
        char pad_d[0x3];
        UUMGSequencePlayer* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlayAnimationForward params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    params.bRestoreState = (bool)bRestoreState;
    ProcessEvent(func, &params);
    return (UUMGSequencePlayer*)params.ReturnValue;
}
bool UUserWidget::OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDrop"));
    struct Params_OnDrop {
        FGeometry MyGeometry; // 0x0
        FPointerEvent PointerEvent; // 0x38
        UDragDropOperation* Operation; // 0xa8
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_OnDrop params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UUMGSequencePlayer* UUserWidget::PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed, bool bRestoreState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PlayAnimation"));
    struct Params_PlayAnimation {
        UWidgetAnimation* InAnimation; // 0x0
        float StartAtTime; // 0x8
        int32_t NumLoopsToPlay; // 0xc
        EUMGSequencePlayMode::Type PlayMode; // 0x10
        char pad_11[0x3];
        float PlaybackSpeed; // 0x14
        bool bRestoreState; // 0x18
        char pad_19[0x7];
        UUMGSequencePlayer* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_PlayAnimation params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.StartAtTime = (float)StartAtTime;
    params.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    params.PlayMode = (EUMGSequencePlayMode::Type)PlayMode;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    params.bRestoreState = (bool)bRestoreState;
    ProcessEvent(func, &params);
    return (UUMGSequencePlayer*)params.ReturnValue;
}
float UUserWidget::PauseAnimation(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.PauseAnimation"));
    struct Params_PauseAnimation {
        UWidgetAnimation* InAnimation; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_PauseAnimation params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FEventReply UUserWidget::OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnPreviewKeyDown"));
    struct Params_OnPreviewKeyDown {
        FGeometry MyGeometry; // 0x0
        FKeyEvent InKeyEvent; // 0x38
        FEventReply ReturnValue; // 0x70
    }; // Size: 0x128
    Params_OnPreviewKeyDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnRemovedFromFocusPath(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnRemovedFromFocusPath"));
    struct Params_OnRemovedFromFocusPath {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnRemovedFromFocusPath params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnTouchMoved"));
    struct Params_OnTouchMoved {
        FGeometry MyGeometry; // 0x0
        FPointerEvent InTouchEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnTouchMoved params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InTouchEvent = (FPointerEvent)InTouchEvent;
    ProcessEvent(func, &params);
    InTouchEvent = params.InTouchEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnMouseLeave(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
FEventReply UUserWidget::OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnTouchGesture"));
    struct Params_OnTouchGesture {
        FGeometry MyGeometry; // 0x0
        FPointerEvent GestureEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnTouchGesture params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.GestureEvent = (FPointerEvent)GestureEvent;
    ProcessEvent(func, &params);
    GestureEvent = params.GestureEvent;
    return (FEventReply)params.ReturnValue;
}
FEventReply UUserWidget::OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnTouchEnded"));
    struct Params_OnTouchEnded {
        FGeometry MyGeometry; // 0x0
        FPointerEvent InTouchEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnTouchEnded params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InTouchEvent = (FPointerEvent)InTouchEvent;
    ProcessEvent(func, &params);
    InTouchEvent = params.InTouchEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseEnter"));
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
void UUserWidget::FlushAnimations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.FlushAnimations"));
    struct Params_FlushAnimations {
    }; // Size: 0x0
    Params_FlushAnimations params{};
    ProcessEvent(func, &params);
}
void UUserWidget::OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDragLeave"));
    struct Params_OnDragLeave {
        FPointerEvent PointerEvent; // 0x0
        UDragDropOperation* Operation; // 0x70
    }; // Size: 0x78
    Params_OnDragLeave params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown"));
    struct Params_OnPreviewMouseButtonDown {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnPreviewMouseButtonDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnPaint(FPaintContext& Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnPaint"));
    struct Params_OnPaint {
        FPaintContext Context; // 0x0
    }; // Size: 0x30
    Params_OnPaint params{};
    params.Context = (FPaintContext)Context;
    ProcessEvent(func, &params);
    Context = params.Context;
}
FEventReply UUserWidget::OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseMove"));
    struct Params_OnMouseMove {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnMouseMove params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDragDetected"));
    struct Params_OnDragDetected {
        FGeometry MyGeometry; // 0x0
        FPointerEvent PointerEvent; // 0x38
        UDragDropOperation* Operation; // 0xa8
    }; // Size: 0xb0
    Params_OnDragDetected params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
    Operation = params.Operation;
}
void UUserWidget::OnMouseCaptureLost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseCaptureLost"));
    struct Params_OnMouseCaptureLost {
    }; // Size: 0x0
    Params_OnMouseCaptureLost params{};
    ProcessEvent(func, &params);
}
FEventReply UUserWidget::OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick"));
    struct Params_OnMouseButtonDoubleClick {
        FGeometry InMyGeometry; // 0x0
        FPointerEvent InMouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnMouseButtonDoubleClick params{};
    params.InMyGeometry = (FGeometry)InMyGeometry;
    params.InMouseEvent = (FPointerEvent)InMouseEvent;
    ProcessEvent(func, &params);
    InMouseEvent = params.InMouseEvent;
    return (FEventReply)params.ReturnValue;
}
FEventReply UUserWidget::OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnKeyUp"));
    struct Params_OnKeyUp {
        FGeometry MyGeometry; // 0x0
        FKeyEvent InKeyEvent; // 0x38
        FEventReply ReturnValue; // 0x70
    }; // Size: 0x128
    Params_OnKeyUp params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUserWidget::OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDragEnter"));
    struct Params_OnDragEnter {
        FGeometry MyGeometry; // 0x0
        FPointerEvent PointerEvent; // 0x38
        UDragDropOperation* Operation; // 0xa8
    }; // Size: 0xb0
    Params_OnDragEnter params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
}
void UUserWidget::OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnDragCancelled"));
    struct Params_OnDragCancelled {
        FPointerEvent PointerEvent; // 0x0
        UDragDropOperation* Operation; // 0x70
    }; // Size: 0x78
    Params_OnDragCancelled params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
}
void UUserWidget::OnAnimationStarted(UWidgetAnimation* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnAnimationStarted"));
    struct Params_OnAnimationStarted {
        UWidgetAnimation* Animation; // 0x0
    }; // Size: 0x8
    Params_OnAnimationStarted params{};
    params.Animation = (UWidgetAnimation*)Animation;
    ProcessEvent(func, &params);
}
void UUserWidget::OnAnimationFinished(UWidgetAnimation* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.OnAnimationFinished"));
    struct Params_OnAnimationFinished {
        UWidgetAnimation* Animation; // 0x0
    }; // Size: 0x8
    Params_OnAnimationFinished params{};
    params.Animation = (UWidgetAnimation*)Animation;
    ProcessEvent(func, &params);
}
void UUserWidget::ListenForInputAction(FName ActionName, EInputEvent EventType, bool bConsume) {}
bool UUserWidget::IsPlayingAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsPlayingAnimation"));
    struct Params_IsPlayingAnimation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingAnimation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUserWidget::IsListeningForInputAction(FName ActionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsListeningForInputAction"));
    struct Params_IsListeningForInputAction {
        FName ActionName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsListeningForInputAction params{};
    params.ActionName = (FName)ActionName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APawn* UUserWidget::GetOwningPlayerPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetOwningPlayerPawn"));
    struct Params_GetOwningPlayerPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPlayerPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
bool UUserWidget::IsInteractable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsInteractable"));
    struct Params_IsInteractable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUserWidget::IsAnyAnimationPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsAnyAnimationPlaying"));
    struct Params_IsAnyAnimationPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyAnimationPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUserWidget::IsAnimationPlayingForward(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsAnimationPlayingForward"));
    struct Params_IsAnimationPlayingForward {
        UWidgetAnimation* InAnimation; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAnimationPlayingForward params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUserWidget::IsAnimationPlaying(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.IsAnimationPlaying"));
    struct Params_IsAnimationPlaying {
        UWidgetAnimation* InAnimation; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAnimationPlaying params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager"));
    struct Params_GetOwningPlayerCameraManager {
        APlayerCameraManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPlayerCameraManager params{};
    ProcessEvent(func, &params);
    return (APlayerCameraManager*)params.ReturnValue;
}
float UUserWidget::GetAnimationCurrentTime(UWidgetAnimation* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetAnimationCurrentTime"));
    struct Params_GetAnimationCurrentTime {
        UWidgetAnimation* InAnimation; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAnimationCurrentTime params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FAnchors UUserWidget::GetAnchorsInViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetAnchorsInViewport"));
    struct Params_GetAnchorsInViewport {
        FAnchors ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAnchorsInViewport params{};
    ProcessEvent(func, &params);
    return (FAnchors)params.ReturnValue;
}
FVector2D UUserWidget::GetAlignmentInViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.GetAlignmentInViewport"));
    struct Params_GetAlignmentInViewport {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAlignmentInViewport params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UUserWidget::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUserWidget::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUserWidget::CancelLatentActions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.CancelLatentActions"));
    struct Params_CancelLatentActions {
    }; // Size: 0x0
    Params_CancelLatentActions params{};
    ProcessEvent(func, &params);
}
void UUserWidget::BindToAnimationStarted(UWidgetAnimation* Animation) {}
void UUserWidget::BindToAnimationFinished(UWidgetAnimation* Animation) {}
void UUserWidget::BindToAnimationEvent(UWidgetAnimation* Animation) {}
void UUserWidget::AddToViewport(int32_t ZOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.AddToViewport"));
    struct Params_AddToViewport {
        int32_t ZOrder; // 0x0
    }; // Size: 0x4
    Params_AddToViewport params{};
    params.ZOrder = (int32_t)ZOrder;
    ProcessEvent(func, &params);
}
bool UUserWidget::AddToPlayerScreen(int32_t ZOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserWidget.AddToPlayerScreen"));
    struct Params_AddToPlayerScreen {
        int32_t ZOrder; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_AddToPlayerScreen params{};
    params.ZOrder = (int32_t)ZOrder;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
