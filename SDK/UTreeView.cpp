#include "UFunction.hpp"
#include "UListView.hpp"
#include "UObject.hpp"
#include "UTreeView.hpp"
UTreeView* UTreeView::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.TreeView");
    return (UTreeView*)res;
}
void UTreeView::SetItemExpansion(UObject* Item, bool bExpandItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TreeView.SetItemExpansion"));
    struct Params_SetItemExpansion {
        UObject* Item; // 0x0
        bool bExpandItem; // 0x8
    }; // Size: 0x9
    Params_SetItemExpansion params{};
    params.Item = (UObject*)Item;
    params.bExpandItem = (bool)bExpandItem;
    ProcessEvent(func, &params);
}
void UTreeView::ExpandAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TreeView.ExpandAll"));
    struct Params_ExpandAll {
    }; // Size: 0x0
    Params_ExpandAll params{};
    ProcessEvent(func, &params);
}
void UTreeView::CollapseAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TreeView.CollapseAll"));
    struct Params_CollapseAll {
    }; // Size: 0x0
    Params_CollapseAll params{};
    ProcessEvent(func, &params);
}
