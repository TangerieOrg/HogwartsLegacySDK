#include "AActor.hpp"
#include "ESlateVisibility.hpp"
#include "UActionDiamondRing.hpp"
#include "UActionRingItem.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
UActionDiamondRing* UActionDiamondRing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionDiamondRing");
    return (UActionDiamondRing*)res;
}
void UActionDiamondRing::UpdateMiniDiamond(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.UpdateMiniDiamond"));
    struct Params_UpdateMiniDiamond {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_UpdateMiniDiamond params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::ShowMiniDiamond() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.ShowMiniDiamond"));
    struct Params_ShowMiniDiamond {
    }; // Size: 0x0
    Params_ShowMiniDiamond params{};
    ProcessEvent(func, &params);
}
void UActionDiamondRing::ShowButtonCallouts(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.ShowButtonCallouts"));
    struct Params_ShowButtonCallouts {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowButtonCallouts params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::OnShowButtonsChanged(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.OnShowButtonsChanged"));
    struct Params_OnShowButtonsChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowButtonsChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::OnShowHUDElement(bool IgnoreLocks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.OnShowHUDElement"));
    struct Params_OnShowHUDElement {
        bool IgnoreLocks; // 0x0
    }; // Size: 0x1
    Params_OnShowHUDElement params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::OnFocusChanged(AActor* Actor, float Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.OnFocusChanged"));
    struct Params_OnFocusChanged {
        AActor* Actor; // 0x0
        float Delta; // 0x8
    }; // Size: 0xc
    Params_OnFocusChanged params{};
    params.Actor = (AActor*)Actor;
    params.Delta = (float)Delta;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::OnHideHUDElement(ESlateVisibility HiddenState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.OnHideHUDElement"));
    struct Params_OnHideHUDElement {
        ESlateVisibility HiddenState; // 0x0
    }; // Size: 0x1
    Params_OnHideHUDElement params{};
    params.HiddenState = (ESlateVisibility)HiddenState;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::NewDiamondSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.NewDiamondSelected"));
    struct Params_NewDiamondSelected {
    }; // Size: 0x0
    Params_NewDiamondSelected params{};
    ProcessEvent(func, &params);
}
void UActionDiamondRing::CollectItemData(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.CollectItemData"));
    struct Params_CollectItemData {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_CollectItemData params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UActionDiamondRing::AddItemWidgetToArray(UActionRingItem* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionDiamondRing.AddItemWidgetToArray"));
    struct Params_AddItemWidgetToArray {
        UActionRingItem* Item; // 0x0
    }; // Size: 0x8
    Params_AddItemWidgetToArray params{};
    params.Item = (UActionRingItem*)Item;
    ProcessEvent(func, &params);
}
