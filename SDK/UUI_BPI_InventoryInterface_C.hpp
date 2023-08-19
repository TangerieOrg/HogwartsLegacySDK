#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUIDisplayMode.hpp"
#include "EUMGInputAction.hpp"
#include "FInventoryResult.hpp"
#include "UInterface.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_InventoryInterface_C : public UInterface {
public:
    static UUI_BPI_InventoryInterface_C* StaticClass();
    void I_AddInspectable(FString RichPaperID);
    void I_GetInventoryTabCategory(EInventoryTabCategory& TabCategory);
    void GetInteractTargetInfo(FName& TargetId, FName& TargetHolderID);
    void I_GetInventory(UUserWidget*& Inventory);
    void SetToInventory(bool ToInventory);
    void I_SetActiveButton(UUserWidget* Button);
    void I_ShowAmountWidget(int32_t Max, FName ItemName);
    void SetButtonTransferDrop(bool Transfer_Drop);
    void I_ClickHandler(bool& Handled);
    void SetCurrentIconButton(UUserWidget* CurrentButton);
    void I_RemoveInspectable(bool& Removed);
    void I_Sort();
    void I_InitButtonsToEmpty();
    void I_RefreshInventory();
    void I_SetInventoryCategory(EInventoryTabCategory Category);
    void GetPlayerInventory(TArray<FInventoryResult>& PlayerInventory);
    void GetScrollBox(UUserWidget*& InventoryScrollBox);
    void SetPickPocketing(bool PickPocketing);
    void I_SetParent(UUserWidget* NewParam);
    void InventoryData();
    void UMGInputHandler(EUMGInputAction InputAction, EInputEvent InputEvent, bool& Handled);
    void ClickHandler(bool& Handled);
    void ShowNavBar(bool ShouldShow);
    void SetStride(int32_t Stride);
    void GetItemBox(UUserWidget*& ItemBox);
    void SetInteractTargetInfo(FName TargetId, FName TargetHolderID);
    void SetMode(EUIDisplayMode UIDisplayMode);
}; // Size: 0x28
#pragma pack(pop)
