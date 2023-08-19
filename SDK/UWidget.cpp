#include "APlayerController.hpp"
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
#include "FPointerEvent.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "FWidgetTransform.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "ULocalPlayer.hpp"
#include "UObject.hpp"
#include "UPanelSlot.hpp"
#include "UPanelWidget.hpp"
#include "UPropertyBinding.hpp"
#include "USlateAccessibleWidgetData.hpp"
#include "UVisual.hpp"
#include "UWidget.hpp"
#include "UWidgetNavigation.hpp"
UWidget* UWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Widget");
    return (UWidget*)res;
}
void UWidget::SetRenderTransformAngle(float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderTransformAngle"));
    struct Params_SetRenderTransformAngle {
        float Angle; // 0x0
    }; // Size: 0x4
    Params_SetRenderTransformAngle params{};
    params.Angle = (float)Angle;
    ProcessEvent(func, &params);
}
void UWidget::SetUserFocus(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetUserFocus"));
    struct Params_SetUserFocus {
        APlayerController* PlayerController; // 0x0
    }; // Size: 0x8
    Params_SetUserFocus params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ProcessEvent(func, &params);
}
void UWidget::SetVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetVisibility"));
    struct Params_SetVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UWidget::SetToolTipText() {}
bool UWidget::HasFocusedDescendants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasFocusedDescendants"));
    struct Params_HasFocusedDescendants {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasFocusedDescendants params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidget::SetToolTip(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetToolTip"));
    struct Params_SetToolTip {
        UWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_SetToolTip params{};
    params.Widget = (UWidget*)Widget;
    ProcessEvent(func, &params);
}
void UWidget::SetRenderTranslation(FVector2D Translation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderTranslation"));
    struct Params_SetRenderTranslation {
        FVector2D Translation; // 0x0
    }; // Size: 0x8
    Params_SetRenderTranslation params{};
    params.Translation = (FVector2D)Translation;
    ProcessEvent(func, &params);
}
void UWidget::SetRenderTransformPivot(FVector2D Pivot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderTransformPivot"));
    struct Params_SetRenderTransformPivot {
        FVector2D Pivot; // 0x0
    }; // Size: 0x8
    Params_SetRenderTransformPivot params{};
    params.Pivot = (FVector2D)Pivot;
    ProcessEvent(func, &params);
}
FEventReply UWidget::OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.OnPointerEvent__DelegateSignature"));
    struct Params_OnPointerEvent__DelegateSignature {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
    }; // Size: 0x160
    Params_OnPointerEvent__DelegateSignature params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
UWidget* UWidget::GetWidget__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetWidget__DelegateSignature"));
    struct Params_GetWidget__DelegateSignature {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWidget__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UWidget::SetRenderTransform(FWidgetTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderTransform"));
    struct Params_SetRenderTransform {
        FWidgetTransform InTransform; // 0x0
    }; // Size: 0x1c
    Params_SetRenderTransform params{};
    params.InTransform = (FWidgetTransform)InTransform;
    ProcessEvent(func, &params);
}
FLinearColor UWidget::GetLinearColor__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetLinearColor__DelegateSignature"));
    struct Params_GetLinearColor__DelegateSignature {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLinearColor__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UWidget::SetNavigationRuleCustom(EUINavigation Direction) {}
void UWidget::SetRenderShear(FVector2D Shear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderShear"));
    struct Params_SetRenderShear {
        FVector2D Shear; // 0x0
    }; // Size: 0x8
    Params_SetRenderShear params{};
    params.Shear = (FVector2D)Shear;
    ProcessEvent(func, &params);
}
bool UWidget::IsVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.IsVisible"));
    struct Params_IsVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidget::SetRenderScale(FVector2D Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderScale"));
    struct Params_SetRenderScale {
        FVector2D Scale; // 0x0
    }; // Size: 0x8
    Params_SetRenderScale params{};
    params.Scale = (FVector2D)Scale;
    ProcessEvent(func, &params);
}
FEventReply UWidget::OnReply__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.OnReply__DelegateSignature"));
    struct Params_OnReply__DelegateSignature {
        FEventReply ReturnValue; // 0x0
    }; // Size: 0xb8
    Params_OnReply__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UWidget::SetRenderOpacity(float InOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetRenderOpacity"));
    struct Params_SetRenderOpacity {
        float InOpacity; // 0x0
    }; // Size: 0x4
    Params_SetRenderOpacity params{};
    params.InOpacity = (float)InOpacity;
    ProcessEvent(func, &params);
}
void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetNavigationRuleExplicit"));
    struct Params_SetNavigationRuleExplicit {
        EUINavigation Direction; // 0x0
        char pad_1[0x7];
        UWidget* InWidget; // 0x8
    }; // Size: 0x10
    Params_SetNavigationRuleExplicit params{};
    params.Direction = (EUINavigation)Direction;
    params.InWidget = (UWidget*)InWidget;
    ProcessEvent(func, &params);
}
void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction) {}
bool UWidget::IsHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.IsHovered"));
    struct Params_IsHovered {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHovered params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetNavigationRuleBase"));
    struct Params_SetNavigationRuleBase {
        EUINavigation Direction; // 0x0
        EUINavigationRule Rule; // 0x1
    }; // Size: 0x2
    Params_SetNavigationRuleBase params{};
    params.Direction = (EUINavigation)Direction;
    params.Rule = (EUINavigationRule)Rule;
    ProcessEvent(func, &params);
}
bool UWidget::GetIsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetIsEnabled"));
    struct Params_GetIsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetNavigationRule"));
    struct Params_SetNavigationRule {
        EUINavigation Direction; // 0x0
        EUINavigationRule Rule; // 0x1
        char pad_2[0x2];
        FName WidgetToFocus; // 0x4
    }; // Size: 0xc
    Params_SetNavigationRule params{};
    params.Direction = (EUINavigation)Direction;
    params.Rule = (EUINavigationRule)Rule;
    params.WidgetToFocus = (FName)WidgetToFocus;
    ProcessEvent(func, &params);
}
void UWidget::SetKeyboardFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetKeyboardFocus"));
    struct Params_SetKeyboardFocus {
    }; // Size: 0x0
    Params_SetKeyboardFocus params{};
    ProcessEvent(func, &params);
}
void UWidget::SetIsEnabled(bool bInIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetIsEnabled"));
    struct Params_SetIsEnabled {
        bool bInIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetIsEnabled params{};
    params.bInIsEnabled = (bool)bInIsEnabled;
    ProcessEvent(func, &params);
}
void UWidget::SetFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetFocus"));
    struct Params_SetFocus {
    }; // Size: 0x0
    Params_SetFocus params{};
    ProcessEvent(func, &params);
}
void UWidget::SetCursor(EMouseCursor::Type InCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetCursor"));
    struct Params_SetCursor {
        EMouseCursor::Type InCursor; // 0x0
    }; // Size: 0x1
    Params_SetCursor params{};
    params.InCursor = (EMouseCursor::Type)InCursor;
    ProcessEvent(func, &params);
}
void UWidget::SetClipping(EWidgetClipping InClipping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetClipping"));
    struct Params_SetClipping {
        EWidgetClipping InClipping; // 0x0
    }; // Size: 0x1
    Params_SetClipping params{};
    params.InClipping = (EWidgetClipping)InClipping;
    ProcessEvent(func, &params);
}
void UWidget::SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.SetAllNavigationRules"));
    struct Params_SetAllNavigationRules {
        EUINavigationRule Rule; // 0x0
        char pad_1[0x3];
        FName WidgetToFocus; // 0x4
    }; // Size: 0xc
    Params_SetAllNavigationRules params{};
    params.Rule = (EUINavigationRule)Rule;
    params.WidgetToFocus = (FName)WidgetToFocus;
    ProcessEvent(func, &params);
}
void UWidget::ResetCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.ResetCursor"));
    struct Params_ResetCursor {
    }; // Size: 0x0
    Params_ResetCursor params{};
    ProcessEvent(func, &params);
}
void UWidget::RemoveFromParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.RemoveFromParent"));
    struct Params_RemoveFromParent {
    }; // Size: 0x0
    Params_RemoveFromParent params{};
    ProcessEvent(func, &params);
}
FVector2D UWidget::GetDesiredSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetDesiredSize"));
    struct Params_GetDesiredSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDesiredSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UWidget::InvalidateLayoutAndVolatility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.InvalidateLayoutAndVolatility"));
    struct Params_InvalidateLayoutAndVolatility {
    }; // Size: 0x0
    Params_InvalidateLayoutAndVolatility params{};
    ProcessEvent(func, &params);
}
ULocalPlayer* UWidget::GetOwningLocalPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetOwningLocalPlayer"));
    struct Params_GetOwningLocalPlayer {
        ULocalPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningLocalPlayer params{};
    ProcessEvent(func, &params);
    return (ULocalPlayer*)params.ReturnValue;
}
bool UWidget::HasUserFocusedDescendants(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasUserFocusedDescendants"));
    struct Params_HasUserFocusedDescendants {
        APlayerController* PlayerController; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasUserFocusedDescendants params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FSlateColor UWidget::GetSlateColor__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetSlateColor__DelegateSignature"));
    struct Params_GetSlateColor__DelegateSignature {
        FSlateColor ReturnValue; // 0x0
    }; // Size: 0x28
    Params_GetSlateColor__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (FSlateColor)params.ReturnValue;
}
bool UWidget::HasUserFocus(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasUserFocus"));
    struct Params_HasUserFocus {
        APlayerController* PlayerController; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasUserFocus params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasMouseCaptureByUser"));
    struct Params_HasMouseCaptureByUser {
        int32_t UserIndex; // 0x0
        int32_t PointerIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasMouseCaptureByUser params{};
    params.UserIndex = (int32_t)UserIndex;
    params.PointerIndex = (int32_t)PointerIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidget::GetAccessibleText() {}
bool UWidget::HasMouseCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasMouseCapture"));
    struct Params_HasMouseCapture {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMouseCapture params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UWidget::GetRenderTransformAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetRenderTransformAngle"));
    struct Params_GetRenderTransformAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRenderTransformAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UWidget::HasKeyboardFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasKeyboardFocus"));
    struct Params_HasKeyboardFocus {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasKeyboardFocus params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UWidget::GetInt32__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetInt32__DelegateSignature"));
    struct Params_GetInt32__DelegateSignature {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInt32__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UWidget::HasAnyUserFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.HasAnyUserFocus"));
    struct Params_HasAnyUserFocus {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyUserFocus params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ESlateVisibility UWidget::GetVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetVisibility"));
    struct Params_GetVisibility {
        ESlateVisibility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetVisibility params{};
    ProcessEvent(func, &params);
    return (ESlateVisibility)params.ReturnValue;
}
EWidgetClipping UWidget::GetClipping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetClipping"));
    struct Params_GetClipping {
        EWidgetClipping ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetClipping params{};
    ProcessEvent(func, &params);
    return (EWidgetClipping)params.ReturnValue;
}
bool UWidget::GetBool__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetBool__DelegateSignature"));
    struct Params_GetBool__DelegateSignature {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBool__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGeometry UWidget::GetTickSpaceGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetTickSpaceGeometry"));
    struct Params_GetTickSpaceGeometry {
        FGeometry ReturnValue; // 0x0
    }; // Size: 0x38
    Params_GetTickSpaceGeometry params{};
    ProcessEvent(func, &params);
    return (FGeometry)params.ReturnValue;
}
ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetSlateVisibility__DelegateSignature"));
    struct Params_GetSlateVisibility__DelegateSignature {
        ESlateVisibility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSlateVisibility__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (ESlateVisibility)params.ReturnValue;
}
void UWidget::GetText__DelegateSignature() {}
FSlateBrush UWidget::GetSlateBrush__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetSlateBrush__DelegateSignature"));
    struct Params_GetSlateBrush__DelegateSignature {
        FSlateBrush ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetSlateBrush__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
float UWidget::GetRenderOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetRenderOpacity"));
    struct Params_GetRenderOpacity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRenderOpacity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UPanelWidget* UWidget::GetParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetParent"));
    struct Params_GetParent {
        UPanelWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParent params{};
    ProcessEvent(func, &params);
    return (UPanelWidget*)params.ReturnValue;
}
FGeometry UWidget::GetPaintSpaceGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetPaintSpaceGeometry"));
    struct Params_GetPaintSpaceGeometry {
        FGeometry ReturnValue; // 0x0
    }; // Size: 0x38
    Params_GetPaintSpaceGeometry params{};
    ProcessEvent(func, &params);
    return (FGeometry)params.ReturnValue;
}
APlayerController* UWidget::GetOwningPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetOwningPlayer"));
    struct Params_GetOwningPlayer {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPlayer params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
FGeometry UWidget::GetCachedGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetCachedGeometry"));
    struct Params_GetCachedGeometry {
        FGeometry ReturnValue; // 0x0
    }; // Size: 0x38
    Params_GetCachedGeometry params{};
    ProcessEvent(func, &params);
    return (FGeometry)params.ReturnValue;
}
EMouseCursor::Type UWidget::GetMouseCursor__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetMouseCursor__DelegateSignature"));
    struct Params_GetMouseCursor__DelegateSignature {
        EMouseCursor::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMouseCursor__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (EMouseCursor::Type)params.ReturnValue;
}
UGameInstance* UWidget::GetGameInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.GetGameInstance"));
    struct Params_GetGameInstance {
        UGameInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameInstance params{};
    ProcessEvent(func, &params);
    return (UGameInstance*)params.ReturnValue;
}
float UWidget::GetFloat__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetFloat__DelegateSignature"));
    struct Params_GetFloat__DelegateSignature {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFloat__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature"));
    struct Params_GenerateWidgetForObject__DelegateSignature {
        UObject* Item; // 0x0
        UWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GenerateWidgetForObject__DelegateSignature params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GetCheckBoxState__DelegateSignature"));
    struct Params_GetCheckBoxState__DelegateSignature {
        ECheckBoxState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCheckBoxState__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
void UWidget::GetAccessibleSummaryText() {}
UWidget* UWidget::GenerateWidgetForString__DelegateSignature(FString Item) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature"));
    struct Params_GenerateWidgetForString__DelegateSignature {
        FString Item; // 0x0
        UWidget* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GenerateWidgetForString__DelegateSignature params{};
    params.Item = (FString)Item;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UWidget::ForceVolatile(bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.ForceVolatile"));
    struct Params_ForceVolatile {
        bool bForce; // 0x0
    }; // Size: 0x1
    Params_ForceVolatile params{};
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void UWidget::ForceLayoutPrepass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Widget.ForceLayoutPrepass"));
    struct Params_ForceLayoutPrepass {
    }; // Size: 0x0
    Params_ForceLayoutPrepass params{};
    ProcessEvent(func, &params);
}
