#include "UFastTravelList.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
void UFastTravelList::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
bool UFastTravelList::IsListVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.IsListVisible"));
    struct Params_IsListVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsListVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UFastTravelList* UFastTravelList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelList");
    return (UFastTravelList*)res;
}
void UFastTravelList::ShowEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.ShowEvent"));
    struct Params_ShowEvent {
    }; // Size: 0x0
    Params_ShowEvent params{};
    ProcessEvent(func, &params);
}
void UFastTravelList::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void UFastTravelList::SetListTitle(FString Title) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.SetListTitle"));
    struct Params_SetListTitle {
        FString Title; // 0x0
    }; // Size: 0x10
    Params_SetListTitle params{};
    params.Title = (FString)Title;
    ProcessEvent(func, &params);
}
void UFastTravelList::HighlightListMenuItem(FString ItemName, bool bCallUnHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.HighlightListMenuItem"));
    struct Params_HighlightListMenuItem {
        FString ItemName; // 0x0
        bool bCallUnHovered; // 0x10
    }; // Size: 0x11
    Params_HighlightListMenuItem params{};
    params.ItemName = (FString)ItemName;
    params.bCallUnHovered = (bool)bCallUnHovered;
    ProcessEvent(func, &params);
}
void UFastTravelList::HideEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.HideEvent"));
    struct Params_HideEvent {
    }; // Size: 0x0
    Params_HideEvent params{};
    ProcessEvent(func, &params);
}
void UFastTravelList::EnableItem(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.EnableItem"));
    struct Params_EnableItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_EnableItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UFastTravelList::DisableItem(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.DisableItem"));
    struct Params_DisableItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_DisableItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UFastTravelList::ClearListMenuItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.ClearListMenuItems"));
    struct Params_ClearListMenuItems {
    }; // Size: 0x0
    Params_ClearListMenuItems params{};
    ProcessEvent(func, &params);
}
void UFastTravelList::ClearHighlightListMenuItem(bool bCallUnHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.ClearHighlightListMenuItem"));
    struct Params_ClearHighlightListMenuItem {
        bool bCallUnHovered; // 0x0
    }; // Size: 0x1
    Params_ClearHighlightListMenuItem params{};
    params.bCallUnHovered = (bool)bCallUnHovered;
    ProcessEvent(func, &params);
}
void UFastTravelList::ClearAllHighlightedListMenuItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.ClearAllHighlightedListMenuItems"));
    struct Params_ClearAllHighlightedListMenuItems {
    }; // Size: 0x0
    Params_ClearAllHighlightedListMenuItems params{};
    ProcessEvent(func, &params);
}
void UFastTravelList::AddListMenuItem(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.AddListMenuItem"));
    struct Params_AddListMenuItem {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_AddListMenuItem params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void UFastTravelList::AddList(TArray<FString>& ItemList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelList.AddList"));
    struct Params_AddList {
        TArray<FString> ItemList; // 0x0
    }; // Size: 0x10
    Params_AddList params{};
    params.ItemList = (TArray<FString>)ItemList;
    ProcessEvent(func, &params);
    ItemList = params.ItemList;
}
