#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_DpadNavBar_C.hpp"
#include "UUserWidget.hpp"
void UUI_BPI_DpadNavBar_C::I_SetCategoryNames(TArray<void*>& Categories) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.I_SetCategoryNames"));
    struct Params_I_SetCategoryNames {
        TArray<void*> Categories; // 0x0
    }; // Size: 0x10
    Params_I_SetCategoryNames params{};
    params.Categories = (TArray<void*>)Categories;
    ProcessEvent(func, &params);
    Categories = params.Categories;
}
void UUI_BPI_DpadNavBar_C::RefreshCategoryNewCounts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.RefreshCategoryNewCounts"));
    struct Params_RefreshCategoryNewCounts {
    }; // Size: 0x0
    Params_RefreshCategoryNewCounts params{};
    ProcessEvent(func, &params);
}
UUI_BPI_DpadNavBar_C* UUI_BPI_DpadNavBar_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C");
    return (UUI_BPI_DpadNavBar_C*)res;
}
void UUI_BPI_DpadNavBar_C::NavBar_InitCategoryButtons() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.NavBar_InitCategoryButtons"));
    struct Params_NavBar_InitCategoryButtons {
    }; // Size: 0x0
    Params_NavBar_InitCategoryButtons params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_DpadNavBar_C::SetOwner(UUserWidget* NewOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.SetOwner"));
    struct Params_SetOwner {
        UUserWidget* NewOwner; // 0x0
    }; // Size: 0x8
    Params_SetOwner params{};
    params.NewOwner = (UUserWidget*)NewOwner;
    ProcessEvent(func, &params);
}
void UUI_BPI_DpadNavBar_C::GoToCategoryNext() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.GoToCategoryNext"));
    struct Params_GoToCategoryNext {
    }; // Size: 0x0
    Params_GoToCategoryNext params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_DpadNavBar_C::SetCurCategoryIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.SetCurCategoryIndex"));
    struct Params_SetCurCategoryIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetCurCategoryIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UUI_BPI_DpadNavBar_C::GoToCategoryPrev() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_DpadNavBar.UI_BPI_DpadNavBar_C.GoToCategoryPrev"));
    struct Params_GoToCategoryPrev {
    }; // Size: 0x0
    Params_GoToCategoryPrev params{};
    ProcessEvent(func, &params);
}
