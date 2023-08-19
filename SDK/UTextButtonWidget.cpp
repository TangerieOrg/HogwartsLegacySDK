#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTextButtonWidget.hpp"
void UTextButtonWidget::ChangeTextColorOnButtonHover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TextButtonWidget.ChangeTextColorOnButtonHover"));
    struct Params_ChangeTextColorOnButtonHover {
    }; // Size: 0x0
    Params_ChangeTextColorOnButtonHover params{};
    ProcessEvent(func, &params);
}
UTextButtonWidget* UTextButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TextButtonWidget");
    return (UTextButtonWidget*)res;
}
void UTextButtonWidget::SetText() {}
void UTextButtonWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TextButtonWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UTextButtonWidget::ChangeTextColorOnButtonUnHover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TextButtonWidget.ChangeTextColorOnButtonUnHover"));
    struct Params_ChangeTextColorOnButtonUnHover {
    }; // Size: 0x0
    Params_ChangeTextColorOnButtonUnHover params{};
    ProcessEvent(func, &params);
}
void UTextButtonWidget::GetText() {}
