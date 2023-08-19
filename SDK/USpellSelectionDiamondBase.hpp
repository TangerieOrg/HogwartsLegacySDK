#pragma once
#include <cstdint>
#include "EUIQActionBarType.hpp"
#include "UUserWidget.hpp"
class USelectionRingItemBase;
#pragma pack(push, 1)
class USpellSelectionDiamondBase : public UUserWidget {
public:
    int32_t SelectedIndex; // 0x268
    char pad_26c[0x14];
    static USpellSelectionDiamondBase* StaticClass();
    void SlotNewItem(FString NewItem, FString Variation, FName ItemHolder, int32_t Count, EUIQActionBarType Type);
    void SetSelectedIndex(int32_t Index);
    void CollectItemData(int32_t GroupIndex);
    void AddItemToWidgetArray(USelectionRingItemBase* Widget);
}; // Size: 0x280
#pragma pack(pop)
