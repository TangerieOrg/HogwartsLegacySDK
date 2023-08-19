#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "EWidgetInteractionSource.hpp"
#include "FHitResult.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "USceneComponent.hpp"
class UWidgetComponent;
class UWidget;
#pragma pack(push, 1)
class UWidgetInteractionComponent : public USceneComponent {
public:
    char pad_220[0x18];
    int32_t VirtualUserIndex; // 0x238
    int32_t PointerIndex; // 0x23c
    ECollisionChannel TraceChannel; // 0x240
    char pad_241[0x3];
    float InteractionDistance; // 0x244
    EWidgetInteractionSource InteractionSource; // 0x248
    bool bEnableHitTesting; // 0x249
    bool bShowDebug; // 0x24a
    char pad_24b[0x1];
    float DebugSphereLineThickness; // 0x24c
    float DebugLineThickness; // 0x250
    FLinearColor DebugColor; // 0x254
    char pad_264[0x7c];
    FHitResult CustomHitResult; // 0x2e0
    FVector2D LocalHitLocation; // 0x368
    FVector2D LastLocalHitLocation; // 0x370
    UWidgetComponent* HoveredWidgetComponent; // 0x378
    FHitResult LastHitResult; // 0x380
    bool bIsHoveredWidgetInteractable; // 0x408
    bool bIsHoveredWidgetFocusable; // 0x409
    bool bIsHoveredWidgetHitTestVisible; // 0x40a
    char pad_40b[0x5];
    static UWidgetInteractionComponent* StaticClass();
    void SetFocus(UWidget* FocusWidget);
    void SetCustomHitResult(FHitResult& HitResult);
    bool SendKeyChar(FString Characters, bool bRepeat);
    void ScrollWheel(float ScrollDelta);
    void ReleasePointerKey(FKey Key);
    bool ReleaseKey(FKey Key);
    void PressPointerKey(FKey Key);
    bool PressKey(FKey Key, bool bRepeat);
    bool PressAndReleaseKey(FKey Key);
    bool IsOverInteractableWidget();
    bool IsOverHitTestVisibleWidget();
    bool IsOverFocusableWidget();
    FHitResult GetLastHitResult();
    UWidgetComponent* GetHoveredWidgetComponent();
    FVector2D Get2DHitLocation();
}; // Size: 0x410
#pragma pack(pop)
