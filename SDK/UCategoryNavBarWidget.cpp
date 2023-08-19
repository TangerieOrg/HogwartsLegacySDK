#include "UCategoryNavBarWidget.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UUserWidget.hpp"
void UCategoryNavBarWidget::OnCategoryButtonUnHover(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnCategoryButtonUnHover"));
    struct Params_OnCategoryButtonUnHover {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnCategoryButtonUnHover params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
UCategoryNavBarWidget* UCategoryNavBarWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CategoryNavBarWidget");
    return (UCategoryNavBarWidget*)res;
}
void UCategoryNavBarWidget::PrevCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.PrevCategory"));
    struct Params_PrevCategory {
    }; // Size: 0x0
    Params_PrevCategory params{};
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::OnCategoryButtonHover(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnCategoryButtonHover"));
    struct Params_OnCategoryButtonHover {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnCategoryButtonHover params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::OnUnhover(UIconButtonWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnUnhover"));
    struct Params_OnUnhover {
        UIconButtonWidget* hoveredButton; // 0x0
    }; // Size: 0x8
    Params_OnUnhover params{};
    params.hoveredButton = (UIconButtonWidget*)hoveredButton;
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::OnHover(UIconButtonWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnHover"));
    struct Params_OnHover {
        UIconButtonWidget* hoveredButton; // 0x0
    }; // Size: 0x8
    Params_OnHover params{};
    params.hoveredButton = (UIconButtonWidget*)hoveredButton;
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::OnClick(int32_t SelectedCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnClick"));
    struct Params_OnClick {
        int32_t SelectedCategory; // 0x0
    }; // Size: 0x4
    Params_OnClick params{};
    params.SelectedCategory = (int32_t)SelectedCategory;
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::OnCategoryButtonClicked(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.OnCategoryButtonClicked"));
    struct Params_OnCategoryButtonClicked {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_OnCategoryButtonClicked params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::NextCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.NextCategory"));
    struct Params_NextCategory {
    }; // Size: 0x0
    Params_NextCategory params{};
    ProcessEvent(func, &params);
}
void UCategoryNavBarWidget::InitializeButton(UIconButtonWidget* Button) {}
int32_t UCategoryNavBarWidget::GetIndexOfButton(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.GetIndexOfButton"));
    struct Params_GetIndexOfButton {
        UIconButtonWidget* Button; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetIndexOfButton params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UCategoryNavBarWidget::GetCurrentCategory() {}
UIconButtonWidget* UCategoryNavBarWidget::GetButtonByIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CategoryNavBarWidget.GetButtonByIndex"));
    struct Params_GetButtonByIndex {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetButtonByIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UIconButtonWidget*)params.ReturnValue;
}
void UCategoryNavBarWidget::AddCategory() {}
