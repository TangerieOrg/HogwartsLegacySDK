#include "EConsumeMouseWheel.hpp"
#include "EOrientation.hpp"
#include "ESelectionMode\Type.hpp"
#include "UFunction.hpp"
#include "UListView.hpp"
#include "UListViewBase.hpp"
#include "UObject.hpp"
UListView* UListView::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ListView");
    return (UListView*)res;
}
void UListView::ScrollIndexIntoView(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.ScrollIndexIntoView"));
    struct Params_ScrollIndexIntoView {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_ScrollIndexIntoView params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
bool UListView::BP_GetSelectedItems(TArray<UObject*>& Items) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_GetSelectedItems"));
    struct Params_BP_GetSelectedItems {
        TArray<UObject*> Items; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_BP_GetSelectedItems params{};
    params.Items = (TArray<UObject*>)Items;
    ProcessEvent(func, &params);
    Items = params.Items;
    return (bool)params.ReturnValue;
}
void UListView::SetSelectionMode(ESelectionMode::Type SelectionMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.SetSelectionMode"));
    struct Params_SetSelectionMode {
        ESelectionMode::Type SelectionMode; // 0x0
    }; // Size: 0x1
    Params_SetSelectionMode params{};
    params.SelectionMode = (ESelectionMode::Type)SelectionMode;
    ProcessEvent(func, &params);
}
void UListView::SetSelectedIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.SetSelectedIndex"));
    struct Params_SetSelectedIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetSelectedIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UListView::RemoveItem(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.RemoveItem"));
    struct Params_RemoveItem {
        UObject* Item; // 0x0
    }; // Size: 0x8
    Params_RemoveItem params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
}
void UListView::NavigateToIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.NavigateToIndex"));
    struct Params_NavigateToIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_NavigateToIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
bool UListView::IsRefreshPending() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.IsRefreshPending"));
    struct Params_IsRefreshPending {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRefreshPending params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UListView::GetIndexForItem(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.GetIndexForItem"));
    struct Params_GetIndexForItem {
        UObject* Item; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetIndexForItem params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UListView::GetNumItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.GetNumItems"));
    struct Params_GetNumItems {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumItems params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<UObject*> UListView::GetListItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.GetListItems"));
    struct Params_GetListItems {
        TArray<UObject*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetListItems params{};
    ProcessEvent(func, &params);
    return (TArray<UObject*>)params.ReturnValue;
}
UObject* UListView::GetItemAt(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.GetItemAt"));
    struct Params_GetItemAt {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetItemAt params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void UListView::ClearListItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.ClearListItems"));
    struct Params_ClearListItems {
    }; // Size: 0x0
    Params_ClearListItems params{};
    ProcessEvent(func, &params);
}
void UListView::BP_SetSelectedItem(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_SetSelectedItem"));
    struct Params_BP_SetSelectedItem {
        UObject* Item; // 0x0
    }; // Size: 0x8
    Params_BP_SetSelectedItem params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
}
void UListView::BP_SetListItems(TArray<UObject*>& InListItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_SetListItems"));
    struct Params_BP_SetListItems {
        TArray<UObject*> InListItems; // 0x0
    }; // Size: 0x10
    Params_BP_SetListItems params{};
    params.InListItems = (TArray<UObject*>)InListItems;
    ProcessEvent(func, &params);
    InListItems = params.InListItems;
}
void UListView::BP_SetItemSelection(UObject* Item, bool bSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_SetItemSelection"));
    struct Params_BP_SetItemSelection {
        UObject* Item; // 0x0
        bool bSelected; // 0x8
    }; // Size: 0x9
    Params_BP_SetItemSelection params{};
    params.Item = (UObject*)Item;
    params.bSelected = (bool)bSelected;
    ProcessEvent(func, &params);
}
void UListView::BP_ScrollItemIntoView(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_ScrollItemIntoView"));
    struct Params_BP_ScrollItemIntoView {
        UObject* Item; // 0x0
    }; // Size: 0x8
    Params_BP_ScrollItemIntoView params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
}
void UListView::BP_NavigateToItem(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_NavigateToItem"));
    struct Params_BP_NavigateToItem {
        UObject* Item; // 0x0
    }; // Size: 0x8
    Params_BP_NavigateToItem params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
}
bool UListView::BP_IsItemVisible(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_IsItemVisible"));
    struct Params_BP_IsItemVisible {
        UObject* Item; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_BP_IsItemVisible params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UObject* UListView::BP_GetSelectedItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_GetSelectedItem"));
    struct Params_BP_GetSelectedItem {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BP_GetSelectedItem params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
int32_t UListView::BP_GetNumItemsSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_GetNumItemsSelected"));
    struct Params_BP_GetNumItemsSelected {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_BP_GetNumItemsSelected params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UListView::BP_ClearSelection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_ClearSelection"));
    struct Params_BP_ClearSelection {
    }; // Size: 0x0
    Params_BP_ClearSelection params{};
    ProcessEvent(func, &params);
}
void UListView::BP_CancelScrollIntoView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.BP_CancelScrollIntoView"));
    struct Params_BP_CancelScrollIntoView {
    }; // Size: 0x0
    Params_BP_CancelScrollIntoView params{};
    ProcessEvent(func, &params);
}
void UListView::AddItem(UObject* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListView.AddItem"));
    struct Params_AddItem {
        UObject* Item; // 0x0
    }; // Size: 0x8
    Params_AddItem params{};
    params.Item = (UObject*)Item;
    ProcessEvent(func, &params);
}
