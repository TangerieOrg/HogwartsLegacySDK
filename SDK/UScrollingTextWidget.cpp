#include "EScrollingWidgetMode.hpp"
#include "EScrollingWidgetTypes.hpp"
#include "ETextTransformPolicy.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScrollingTextWidget.hpp"
#include "UUserWidget.hpp"
void UScrollingTextWidget::SetPhoenixTextColorAndOpacity(FSlateColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetPhoenixTextColorAndOpacity"));
    struct Params_SetPhoenixTextColorAndOpacity {
        FSlateColor InColorAndOpacity; // 0x0
    }; // Size: 0x28
    Params_SetPhoenixTextColorAndOpacity params{};
    params.InColorAndOpacity = (FSlateColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
UScrollingTextWidget* UScrollingTextWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ScrollingTextWidget");
    return (UScrollingTextWidget*)res;
}
void UScrollingTextWidget::SetTextKey(FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetTextKey"));
    struct Params_SetTextKey {
        FString Key; // 0x0
    }; // Size: 0x10
    Params_SetTextKey params{};
    params.Key = (FString)Key;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetTruncationPosition(float Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetTruncationPosition"));
    struct Params_SetTruncationPosition {
        float Position; // 0x0
    }; // Size: 0x4
    Params_SetTruncationPosition params{};
    params.Position = (float)Position;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetShouldShowEllipsis(bool pShouldShowEllipsis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetShouldShowEllipsis"));
    struct Params_SetShouldShowEllipsis {
        bool pShouldShowEllipsis; // 0x0
    }; // Size: 0x1
    Params_SetShouldShowEllipsis params{};
    params.pShouldShowEllipsis = (bool)pShouldShowEllipsis;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetText() {}
float UScrollingTextWidget::GetScrollSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.GetScrollSpeed"));
    struct Params_GetScrollSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScrollSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScrollingTextWidget::SetHorizontalBoxSize(FMargin Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetHorizontalBoxSize"));
    struct Params_SetHorizontalBoxSize {
        FMargin Size; // 0x0
    }; // Size: 0x10
    Params_SetHorizontalBoxSize params{};
    params.Size = (FMargin)Size;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetScrollSpeed(float pScrollSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetScrollSpeed"));
    struct Params_SetScrollSpeed {
        float pScrollSpeed; // 0x0
    }; // Size: 0x4
    Params_SetScrollSpeed params{};
    params.pScrollSpeed = (float)pScrollSpeed;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetPhoenixTextOpacity(float InOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetPhoenixTextOpacity"));
    struct Params_SetPhoenixTextOpacity {
        float InOpacity; // 0x0
    }; // Size: 0x4
    Params_SetPhoenixTextOpacity params{};
    params.InOpacity = (float)InOpacity;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::SetColorTag(FDataTableRowHandle NewColorTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.SetColorTag"));
    struct Params_SetColorTag {
        FDataTableRowHandle NewColorTag; // 0x0
    }; // Size: 0x10
    Params_SetColorTag params{};
    params.NewColorTag = (FDataTableRowHandle)NewColorTag;
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::OnUnhovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.OnUnhovered"));
    struct Params_OnUnhovered {
    }; // Size: 0x0
    Params_OnUnhovered params{};
    ProcessEvent(func, &params);
}
void UScrollingTextWidget::OnHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.OnHovered"));
    struct Params_OnHovered {
    }; // Size: 0x0
    Params_OnHovered params{};
    ProcessEvent(func, &params);
}
float UScrollingTextWidget::GetTruncationPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.GetTruncationPosition"));
    struct Params_GetTruncationPosition {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTruncationPosition params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UScrollingTextWidget::GetShouldShowEllipsis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.GetShouldShowEllipsis"));
    struct Params_GetShouldShowEllipsis {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldShowEllipsis params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScrollingTextWidget::GetPhoenixText() {}
FMargin UScrollingTextWidget::GetHorizontalBoxSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.GetHorizontalBoxSize"));
    struct Params_GetHorizontalBoxSize {
        FMargin ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetHorizontalBoxSize params{};
    ProcessEvent(func, &params);
    return (FMargin)params.ReturnValue;
}
FDataTableRowHandle UScrollingTextWidget::GetColorTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScrollingTextWidget.GetColorTag"));
    struct Params_GetColorTag {
        FDataTableRowHandle ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetColorTag params{};
    ProcessEvent(func, &params);
    return (FDataTableRowHandle)params.ReturnValue;
}
