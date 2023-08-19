#pragma once
#include <cstdint>
#include "EIconButtonState.hpp"
#include "EInventoryQuality.hpp"
#include "FInventoryResult.hpp"
#include "FVector2D.hpp"
#include "UInterface.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_InventoryIconButton_C : public UInterface {
public:
    static UUI_BPI_InventoryIconButton_C* StaticClass();
    void I_Play_Purchase_Animation();
    void I_SetIsNew(bool IsNew);
    void I_GetIsEmpty(bool& isButtonEmpty);
    void I_SetIsQuestItem(bool isQuestItem);
    void I_GetItemRarity(FName& Rarity);
    void SetIconButtonSize(FVector2D NewSize);
    void GetItemVariation(FName& Variation);
    void I_GetItemCount(int32_t& ItemCount);
    void I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount);
    void SetInventoryResult(FInventoryResult InventoryResult);
    void GetModifiedCost(int32_t& ModifiedCost);
    void GetInventoryResult(FInventoryResult& InventoryResult);
    void ErrorAnimation();
    void SetModifiedCost(int32_t ModifiedCost);
    void GetItemCost(int32_t& Cost);
    void SetParent(UUserWidget* Parent);
    void SetIconButtonDisabled();
    void SetIconButtonMissing();
    void SetIconButtonNonExistant();
    void SetIconButtonEnabled();
    void SetIconButtonState(EIconButtonState NewState);
    void GetIconName(FString& IconName);
    void SetCountVisible(bool ShowCount);
    void SetItemCount(int32_t ItemCount);
    void InitializeItemButton(FInventoryResult Inventory_Item, float Modifier);
    void SetItemQuality(EInventoryQuality Quality);
    void GetItemQuality(EInventoryQuality& Quality);
}; // Size: 0x28
#pragma pack(pop)
