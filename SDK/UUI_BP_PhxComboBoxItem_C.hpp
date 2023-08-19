#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UPhoenixUserWidget.hpp"
class UButton;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_PhxComboBoxItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UButton* ItemButton; // 0x330
    UPhoenixTextBlock* TextBlock; // 0x338
    FString ItemText; // 0x340
    FTableRowStyle Style; // 0x350
    bool IsActive; // 0xb18
    char pad_b19[0x7];
    FSlateFontInfo Font; // 0xb20
    char pad_b78[0x30];
    bool IsTranslatable; // 0xba8
    char pad_ba9[0x7];
    static UUI_BP_PhxComboBoxItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void UpdateDynamicStyle(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FSlateColor K2Node_Select_Default, FSlateBrush K2Node_Select_Default_1, FSlateBrush K2Node_Select_Default_2, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void SetIsActive(bool ACTIVE);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_PhxComboBoxItem(int32_t EntryPoint);
    void OnItemUnhovered__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item);
    void OnItemHovered__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item);
    void OnItemClicked__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item);
}; // Size: 0xbb0
#pragma pack(pop)
