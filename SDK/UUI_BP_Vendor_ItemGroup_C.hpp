#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UUniformGridPanel;
class UUI_BP_InventoryIconButton_C;
class UUniformGridSlot;
#pragma pack(push, 1)
class UUI_BP_Vendor_ItemGroup_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* ItemCategoryLabel; // 0x330
    UUniformGridPanel* ItemGrid; // 0x338
    int32_t Stride; // 0x340
    char pad_344[0x4];
    static UUI_BP_Vendor_ItemGroup_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void AddItemButton(UUI_BP_InventoryIconButton_C* ItemButton, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_Vendor_ItemGroup(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x348
#pragma pack(pop)
