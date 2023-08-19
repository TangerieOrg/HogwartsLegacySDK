#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UHUDElementGroup.hpp"
class AActor;
class UActionRingItem;
#pragma pack(push, 1)
class UActionDiamondRing : public UHUDElementGroup {
public:
    int32_t HighlightedSpellIndex; // 0x2e8
    char pad_2ec[0x2c];
    static UActionDiamondRing* StaticClass();
    void UpdateMiniDiamond(int32_t GroupIndex);
    void ShowMiniDiamond();
    void ShowButtonCallouts(bool Show);
    void OnShowHUDElement(bool IgnoreLocks);
    void OnShowButtonsChanged(bool Show);
    void OnHideHUDElement(ESlateVisibility HiddenState);
    void OnFocusChanged(AActor* Actor, float Delta);
    void NewDiamondSelected();
    void CollectItemData(int32_t GroupIndex);
    void AddItemWidgetToArray(UActionRingItem* Item);
}; // Size: 0x318
#pragma pack(pop)
