#include "EGenderEnum.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_CharacterCreatorPage_C.hpp"
void UUI_BPI_CharacterCreatorPage_C::I_ScrollIntoView() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_ScrollIntoView"));
    struct Params_I_ScrollIntoView {
    }; // Size: 0x0
    Params_I_ScrollIntoView params{};
    ProcessEvent(func, &params);
}
UUI_BPI_CharacterCreatorPage_C* UUI_BPI_CharacterCreatorPage_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C");
    return (UUI_BPI_CharacterCreatorPage_C*)res;
}
void UUI_BPI_CharacterCreatorPage_C::I_TabActivated() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_TabActivated"));
    struct Params_I_TabActivated {
    }; // Size: 0x0
    Params_I_TabActivated params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_CharacterCreatorPage_C::I_FinalizeFailed(FString ErrorMsg) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_FinalizeFailed"));
    struct Params_I_FinalizeFailed {
        FString ErrorMsg; // 0x0
    }; // Size: 0x10
    Params_I_FinalizeFailed params{};
    params.ErrorMsg = (FString)ErrorMsg;
    ProcessEvent(func, &params);
}
void UUI_BPI_CharacterCreatorPage_C::I_UpdateIcons(EGenderEnum Gender) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_UpdateIcons"));
    struct Params_I_UpdateIcons {
        EGenderEnum Gender; // 0x0
    }; // Size: 0x1
    Params_I_UpdateIcons params{};
    params.Gender = (EGenderEnum)Gender;
    ProcessEvent(func, &params);
}
void UUI_BPI_CharacterCreatorPage_C::I_GetPageTitle(FString& PageTitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_GetPageTitle"));
    struct Params_I_GetPageTitle {
        FString PageTitle; // 0x0
    }; // Size: 0x10
    Params_I_GetPageTitle params{};
    params.PageTitle = (FString)PageTitle;
    ProcessEvent(func, &params);
    PageTitle = params.PageTitle;
}
void UUI_BPI_CharacterCreatorPage_C::I_GetPageLegend(FString& PageLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_CharacterCreatorPage.UI_BPI_CharacterCreatorPage_C.I_GetPageLegend"));
    struct Params_I_GetPageLegend {
        FString PageLegend; // 0x0
    }; // Size: 0x10
    Params_I_GetPageLegend params{};
    params.PageLegend = (FString)PageLegend;
    ProcessEvent(func, &params);
    PageLegend = params.PageLegend;
}
void UUI_BPI_CharacterCreatorPage_C::I_UpdateHighlights() {}
