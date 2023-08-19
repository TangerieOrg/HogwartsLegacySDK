#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FComboBoxStyle.hpp"
#include "FFocusEvent.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UPhxComboBox.hpp"
class UWidgetAnimation;
class UVerticalBox;
class UImage;
class UUI_BP_PhxComboBoxItem_C;
class UPhoenixTextBlock;
class UButton;
class USizeBox;
class UBorder;
class UUI_BP_SimpleScrollBox_C;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_PhxComboBox_C : public UPhxComboBox {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* rotateArrow; // 0x330
    UWidgetAnimation* Hover; // 0x338
    UPhoenixTextBlock* ActiveItemHeaderText; // 0x340
    UImage* ArrowImage; // 0x348
    UVerticalBox* ContentsBox; // 0x350
    UImage* goldleafBorder; // 0x358
    UImage* goldleafLeft; // 0x360
    UImage* goldleafRigth; // 0x368
    UButton* HeaderButton; // 0x370
    UBorder* ScrollBorder; // 0x378
    UUI_BP_SimpleScrollBox_C* ScrollBox; // 0x380
    USizeBox* ScrollSizeBox; // 0x388
    UPhoenixTextBlock* TitleText; // 0x390
    bool IsExpanded; // 0x398
    char pad_399[0x3];
    float MaxListHeight; // 0x39c
    FComboBoxStyle Style_0; // 0x3a0
    TArray<FString> DropdownItems; // 0x790
    FTableRowStyle ItemStyle; // 0x7a0
    FSlateFontInfo Font_0; // 0xf68
    int32_t SelectedIndex; // 0xfc0
    char pad_fc4[0x4];
    TArray<UUI_BP_PhxComboBoxItem_C*> ItemArray; // 0xfc8
    char pad_fd8[0x80];
    bool ItemsTranslatable; // 0x1058
    bool ScaleTextFont; // 0x1059
    bool WantsPaintGeo; // 0x105a
    char pad_105b[0x5];
    UUI_BP_PhxComboBoxItem_C* LastHoveredItem; // 0x1060
    static UUI_BP_PhxComboBox_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetTitle(FString NewTitleText, bool IsTranslatable);
    void SetDropdownOptions(TArray<FString>& NewOptions);
    void FindOptionIndex(FString InOption, int32_t& Index, bool& bSuccessful, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void SetDesiredScrollSize(float NewHeight);
    void GetSelectedOption(FString& SelectedOption, FString CallFunc_Array_Get_Item);
    void SetItemsTranslatable(bool ItemsTranslatable);
    void GetSelectedIndex(int32_t& SelectedIndex);
    void SetSelectedIndex(int32_t NewIndex, bool TriggerValueChangedEvent, FString CallFunc_Array_Get_Item);
    void PopulateItems(int32_t CurrentActiveIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ItemClicked(UUI_BP_PhxComboBoxItem_C* Item, int32_t NewIndex, int32_t CallFunc_Array_Find_ReturnValue);
    void ItemUnhovered(UUI_BP_PhxComboBoxItem_C* UnhoveredItem);
    void ItemHovered(UUI_BP_PhxComboBoxItem_C* HoveredItem);
    void TogglePopout(bool ShouldExpand, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUI_BP_PhxComboBoxItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnMouseLeave(FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_BP_PhxComboBox(int32_t EntryPoint, FPointerEvent K2Node_Event_MouseEvent, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, FFocusEvent K2Node_Event_InFocusEvent, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void OnSelectionChanged__DelegateSignature(FString NewSelection);
    void OnClose__DelegateSignature();
    void OnHeaderButtonUnhovered__DelegateSignature();
    void OnHeaderButtonHovered__DelegateSignature();
    void OnOpen__DelegateSignature();
    void OnItemUnhovered__DelegateSignature(FString ItemUnhovered);
    void OnItemHovered__DelegateSignature(FString ItemHovered);
    void OnItemClicked__DelegateSignature(FString ItemClicked);
}; // Size: 0x1068
#pragma pack(pop)
