#pragma once
#include <cstdint>
#include "ECheckBoxState.hpp"
#include "EFlowDirectionPreference.hpp"
#include "EMouseCursor\Type.hpp"
#include "ESlateVisibility.hpp"
#include "EUINavigation.hpp"
#include "EUINavigationRule.hpp"
#include "EWidgetClipping.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "FWidgetTransform.hpp"
#include "UVisual.hpp"
class UPanelSlot;
class UPropertyBinding;
class USlateAccessibleWidgetData;
class UWidgetNavigation;
class APlayerController;
struct FPointerEvent;
class UPanelWidget;
class ULocalPlayer;
class UGameInstance;
class UObject;
#pragma pack(push, 1)
class UWidget : public UVisual {
public:
    UPanelSlot* Slot; // 0x28
    char pad_30[0x38];
    UWidget* TooltipWidget; // 0x68
    char pad_70[0x20];
    FWidgetTransform RenderTransform; // 0x90
    FVector2D RenderTransformPivot; // 0xac
    uint8_t bIsVariable : 1; // 0xb4
    uint8_t bCreatedByConstructionScript : 1; // 0xb4
    uint8_t bIsEnabled : 1; // 0xb4
    uint8_t bOverride_Cursor : 1; // 0xb4
    uint8_t pad_bitfield_b4_4 : 4;
    char pad_b5[0x3];
    USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8
    uint8_t bIsVolatile : 1; // 0xc0
    uint8_t pad_bitfield_c0_1 : 7;
    EMouseCursor::Type Cursor; // 0xc1
    EWidgetClipping Clipping; // 0xc2
    ESlateVisibility Visibility; // 0xc3
    float RenderOpacity; // 0xc4
    UWidgetNavigation* Navigation; // 0xc8
    EFlowDirectionPreference FlowDirectionPreference; // 0xd0
    char pad_d1[0x27];
    TArray<UPropertyBinding*> NativeBindings; // 0xf8
    static UWidget* StaticClass();
    void SetVisibility(ESlateVisibility InVisibility);
    void SetUserFocus(APlayerController* PlayerController);
    void SetToolTipText();
    void SetToolTip(UWidget* Widget);
    void SetRenderTranslation(FVector2D Translation);
    void SetRenderTransformPivot(FVector2D Pivot);
    void SetRenderTransformAngle(float Angle);
    void SetRenderTransform(FWidgetTransform InTransform);
    void SetRenderShear(FVector2D Shear);
    void SetRenderScale(FVector2D Scale);
    void SetRenderOpacity(float InOpacity);
    void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);
    void SetNavigationRuleCustomBoundary(EUINavigation Direction);
    void SetNavigationRuleCustom(EUINavigation Direction);
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetFocus();
    void SetCursor(EMouseCursor::Type InCursor);
    void SetClipping(EWidgetClipping InClipping);
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    void ResetCursor();
    void RemoveFromParent();
    FEventReply OnReply__DelegateSignature();
    FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(APlayerController* PlayerController);
    bool HasUserFocus(APlayerController* PlayerController);
    bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    UWidget* GetWidget__DelegateSignature();
    ESlateVisibility GetVisibility();
    FGeometry GetTickSpaceGeometry();
    void GetText__DelegateSignature();
    ESlateVisibility GetSlateVisibility__DelegateSignature();
    FSlateColor GetSlateColor__DelegateSignature();
    FSlateBrush GetSlateBrush__DelegateSignature();
    float GetRenderTransformAngle();
    float GetRenderOpacity();
    UPanelWidget* GetParent();
    FGeometry GetPaintSpaceGeometry();
    APlayerController* GetOwningPlayer();
    ULocalPlayer* GetOwningLocalPlayer();
    EMouseCursor::Type GetMouseCursor__DelegateSignature();
    FLinearColor GetLinearColor__DelegateSignature();
    bool GetIsEnabled();
    int32_t GetInt32__DelegateSignature();
    UGameInstance* GetGameInstance();
    float GetFloat__DelegateSignature();
    FVector2D GetDesiredSize();
    EWidgetClipping GetClipping();
    ECheckBoxState GetCheckBoxState__DelegateSignature();
    FGeometry GetCachedGeometry();
    bool GetBool__DelegateSignature();
    void GetAccessibleText();
    void GetAccessibleSummaryText();
    UWidget* GenerateWidgetForString__DelegateSignature(FString Item);
    UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
}; // Size: 0x108
#pragma pack(pop)
