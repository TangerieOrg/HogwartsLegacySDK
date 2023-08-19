#pragma once
#include <cstdint>
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
#include "FPointerEvent.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
class UWidgetAnimation;
class UInputComponent;
class UUMGSequencePlayer;
class UWidgetTree;
class UUMGSequenceTickManager;
class USoundBase;
class APlayerController;
struct FPaintContext;
class UDragDropOperation;
class APawn;
class APlayerCameraManager;
#pragma pack(push, 1)
class UUserWidget : public UWidget {
public:
    char pad_108[0x8];
    FLinearColor ColorAndOpacity; // 0x110
    char pad_120[0x10];
    FSlateColor ForegroundColor; // 0x130
    char pad_158[0x38];
    FMargin Padding; // 0x190
    TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a0
    UUMGSequenceTickManager* AnimationTickManager; // 0x1b0
    TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8
    TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1c8
    UWidgetTree* WidgetTree; // 0x1d8
    int32_t Priority; // 0x1e0
    uint8_t bSupportsKeyboardFocus : 1; // 0x1e4
    uint8_t bIsFocusable : 1; // 0x1e4
    uint8_t bStopAction : 1; // 0x1e4
    uint8_t bHasScriptImplementedTick : 1; // 0x1e4
    uint8_t bHasScriptImplementedPaint : 1; // 0x1e4
    uint8_t pad_bitfield_1e4_5 : 3;
    char pad_1e5[0xb];
    EWidgetTickFrequency TickFrequency; // 0x1f0
    char pad_1f1[0x7];
    UInputComponent* InputComponent; // 0x1f8
    TArray<FAnimationEventBinding> AnimationCallbacks; // 0x200
    char pad_210[0x58];
    static UUserWidget* StaticClass();
    void UnregisterInputComponent();
    void UnbindFromAnimationStarted(UWidgetAnimation* Animation);
    void UnbindFromAnimationFinished(UWidgetAnimation* Animation);
    void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);
    void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(FName ActionName, EInputEvent EventType);
    void StopListeningForAllInputActions();
    void StopAnimationsAndLatentActions();
    void StopAnimation(UWidgetAnimation* InAnimation);
    void StopAllAnimations();
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed);
    void SetPadding(FMargin InPadding);
    void SetOwningPlayer(APlayerController* LocalPlayerController);
    void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
    void SetInputActionPriority(int32_t NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDesiredSizeInViewport(FVector2D Size);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime);
    void SetAnchorsInViewport(FAnchors Anchors);
    void SetAlignmentInViewport(FVector2D Alignment);
    void ReverseAnimation(UWidgetAnimation* InAnimation);
    void RemoveFromViewport();
    void RegisterInputComponent();
    void PreConstruct(bool IsDesignTime);
    void PlaySound(USoundBase* SoundToPlay);
    UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed, bool bRestoreState);
    float PauseAnimation(UWidgetAnimation* InAnimation);
    FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);
    FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);
    FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);
    FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);
    FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnPaint(FPaintContext& Context);
    FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void OnMouseLeave(FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void OnMouseCaptureLost();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);
    FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);
    void OnInitialized();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
    void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    void OnAnimationStarted(UWidgetAnimation* Animation);
    void OnAnimationFinished(UWidgetAnimation* Animation);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ListenForInputAction(FName ActionName, EInputEvent EventType, bool bConsume);
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(FName ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnyAnimationPlaying();
    bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);
    bool IsAnimationPlaying(UWidgetAnimation* InAnimation);
    APawn* GetOwningPlayerPawn();
    APlayerCameraManager* GetOwningPlayerCameraManager();
    bool GetIsVisible();
    float GetAnimationCurrentTime(UWidgetAnimation* InAnimation);
    FAnchors GetAnchorsInViewport();
    FVector2D GetAlignmentInViewport();
    void FlushAnimations();
    void Destruct();
    void Construct();
    void CancelLatentActions();
    void BindToAnimationStarted(UWidgetAnimation* Animation);
    void BindToAnimationFinished(UWidgetAnimation* Animation);
    void BindToAnimationEvent(UWidgetAnimation* Animation);
    void AddToViewport(int32_t ZOrder);
    bool AddToPlayerScreen(int32_t ZOrder);
}; // Size: 0x268
#pragma pack(pop)
