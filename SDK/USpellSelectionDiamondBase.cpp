#include "EUIQActionBarType.hpp"
#include "UFunction.hpp"
#include "USelectionRingItemBase.hpp"
#include "USpellSelectionDiamondBase.hpp"
#include "UUserWidget.hpp"
USpellSelectionDiamondBase* USpellSelectionDiamondBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellSelectionDiamondBase");
    return (USpellSelectionDiamondBase*)res;
}
void USpellSelectionDiamondBase::AddItemToWidgetArray(USelectionRingItemBase* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellSelectionDiamondBase.AddItemToWidgetArray"));
    struct Params_AddItemToWidgetArray {
        USelectionRingItemBase* Widget; // 0x0
    }; // Size: 0x8
    Params_AddItemToWidgetArray params{};
    params.Widget = (USelectionRingItemBase*)Widget;
    ProcessEvent(func, &params);
}
void USpellSelectionDiamondBase::SlotNewItem(FString NewItem, FString Variation, FName ItemHolder, int32_t Count, EUIQActionBarType Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellSelectionDiamondBase.SlotNewItem"));
    struct Params_SlotNewItem {
        FString NewItem; // 0x0
        FString Variation; // 0x10
        FName ItemHolder; // 0x20
        int32_t Count; // 0x28
        EUIQActionBarType Type; // 0x2c
    }; // Size: 0x2d
    Params_SlotNewItem params{};
    params.NewItem = (FString)NewItem;
    params.Variation = (FString)Variation;
    params.ItemHolder = (FName)ItemHolder;
    params.Count = (int32_t)Count;
    params.Type = (EUIQActionBarType)Type;
    ProcessEvent(func, &params);
}
void USpellSelectionDiamondBase::SetSelectedIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellSelectionDiamondBase.SetSelectedIndex"));
    struct Params_SetSelectedIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetSelectedIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void USpellSelectionDiamondBase::CollectItemData(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellSelectionDiamondBase.CollectItemData"));
    struct Params_CollectItemData {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_CollectItemData params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
