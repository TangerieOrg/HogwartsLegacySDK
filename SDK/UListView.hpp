#pragma once
#include <cstdint>
#include "EConsumeMouseWheel.hpp"
#include "EOrientation.hpp"
#include "ESelectionMode\Type.hpp"
#include "UListViewBase.hpp"
class UObject;
#pragma pack(push, 1)
class UListView : public UListViewBase {
public:
    char pad_218[0xc0];
    EOrientation Orientation; // 0x2d8
    ESelectionMode::Type SelectionMode; // 0x2d9
    EConsumeMouseWheel ConsumeMouseWheel; // 0x2da
    bool bClearSelectionOnClick; // 0x2db
    bool bIsFocusable; // 0x2dc
    char pad_2dd[0x3];
    float EntrySpacing; // 0x2e0
    bool bReturnFocusToSelection; // 0x2e4
    char pad_2e5[0x3];
    TArray<UObject*> ListItems; // 0x2e8
    char pad_2f8[0x70];
    static UListView* StaticClass();
    void SetSelectionMode(ESelectionMode::Type SelectionMode);
    void SetSelectedIndex(int32_t Index);
    void ScrollIndexIntoView(int32_t Index);
    void RemoveItem(UObject* Item);
    void NavigateToIndex(int32_t Index);
    bool IsRefreshPending();
    int32_t GetNumItems();
    TArray<UObject*> GetListItems();
    UObject* GetItemAt(int32_t Index);
    int32_t GetIndexForItem(UObject* Item);
    void ClearListItems();
    void BP_SetSelectedItem(UObject* Item);
    void BP_SetListItems(TArray<UObject*>& InListItems);
    void BP_SetItemSelection(UObject* Item, bool bSelected);
    void BP_ScrollItemIntoView(UObject* Item);
    void BP_NavigateToItem(UObject* Item);
    bool BP_IsItemVisible(UObject* Item);
    bool BP_GetSelectedItems(TArray<UObject*>& Items);
    UObject* BP_GetSelectedItem();
    int32_t BP_GetNumItemsSelected();
    void BP_ClearSelection();
    void BP_CancelScrollIntoView();
    void AddItem(UObject* Item);
}; // Size: 0x368
#pragma pack(pop)
