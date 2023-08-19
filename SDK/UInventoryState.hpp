#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EInventorySortType.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUMGInputAction.hpp"
#include "FInventoryHolder.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "UObject.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UInventoryState : public UObject {
public:
    UUserWidget* InventoryOwner; // 0x28
    static UInventoryState* StaticClass();
    void OnEndState();
    void InitializeState(UUserWidget* OwningWidget);
    bool HandleUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UUserWidget* InventoryButton);
    bool HandleClicked(UUserWidget* InventoryButton);
    void GetTooltipLegendData(FInventoryResult InventoryItem, TArray<FLegendItemData>& LegendData);
    UUserWidget* GetTooltipContent(UUserWidget* hoveredButton);
    TArray<UUserWidget*> GetNonExpandableTooltipContent(UUserWidget* hoveredButton);
    FString GetMenuTitle(EInventoryTabCategory TabCategory);
    TArray<FInventoryHolder> GetInventoryItemData(EInventorySortType SortType);
    EInventoryTabCategory GetDefaultInventoryTab();
}; // Size: 0x30
#pragma pack(pop)
