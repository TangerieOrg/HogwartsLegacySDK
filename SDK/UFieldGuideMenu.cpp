#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
UFieldGuideMenu* UFieldGuideMenu::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideMenu");
    return (UFieldGuideMenu*)res;
}
void UFieldGuideMenu::UpdateMenuLegend(TArray<FLegendItemData>& NewData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideMenu.UpdateMenuLegend"));
    struct Params_UpdateMenuLegend {
        TArray<FLegendItemData> NewData; // 0x0
    }; // Size: 0x10
    Params_UpdateMenuLegend params{};
    params.NewData = (TArray<FLegendItemData>)NewData;
    ProcessEvent(func, &params);
    NewData = params.NewData;
}
void UFieldGuideMenu::MenuReadLegend() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideMenu.MenuReadLegend"));
    struct Params_MenuReadLegend {
    }; // Size: 0x0
    Params_MenuReadLegend params{};
    ProcessEvent(func, &params);
}
void UFieldGuideMenu::ChangeMenuPage(EUMGInputAction MenuPage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideMenu.ChangeMenuPage"));
    struct Params_ChangeMenuPage {
        EUMGInputAction MenuPage; // 0x0
    }; // Size: 0x1
    Params_ChangeMenuPage params{};
    params.MenuPage = (EUMGInputAction)MenuPage;
    ProcessEvent(func, &params);
}
void UFieldGuideMenu::MarkNeedsAutosave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideMenu.MarkNeedsAutosave"));
    struct Params_MarkNeedsAutosave {
    }; // Size: 0x0
    Params_MarkNeedsAutosave params{};
    ProcessEvent(func, &params);
}
