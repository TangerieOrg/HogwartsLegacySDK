#include "ESlateVisibility.hpp"
#include "FComboBoxStyle.hpp"
#include "FFocusEvent.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UBorder.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhxComboBox.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_PhxComboBoxItem_C.hpp"
#include "UUI_BP_PhxComboBox_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_PhxComboBox_C::SetTitle(FString NewTitleText, bool IsTranslatable) {}
UUI_BP_PhxComboBox_C* UUI_BP_PhxComboBox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C");
    return (UUI_BP_PhxComboBox_C*)res;
}
void UUI_BP_PhxComboBox_C::ItemHovered(UUI_BP_PhxComboBoxItem_C* HoveredItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemHovered"));
    struct Params_ItemHovered {
        UUI_BP_PhxComboBoxItem_C* HoveredItem; // 0x0
    }; // Size: 0x8
    Params_ItemHovered params{};
    params.HoveredItem = (UUI_BP_PhxComboBoxItem_C*)HoveredItem;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_PhxComboBox_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_PhxComboBox_C::SetDropdownOptions(TArray<FString>& NewOptions) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetDropdownOptions"));
    struct Params_SetDropdownOptions {
        TArray<FString> NewOptions; // 0x0
    }; // Size: 0x10
    Params_SetDropdownOptions params{};
    params.NewOptions = (TArray<FString>)NewOptions;
    ProcessEvent(func, &params);
    NewOptions = params.NewOptions;
}
void UUI_BP_PhxComboBox_C::SetDesiredScrollSize(float NewHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetDesiredScrollSize"));
    struct Params_SetDesiredScrollSize {
        float NewHeight; // 0x0
    }; // Size: 0x4
    Params_SetDesiredScrollSize params{};
    params.NewHeight = (float)NewHeight;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::FindOptionIndex(FString InOption, int32_t& Index, bool& bSuccessful, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.FindOptionIndex"));
    struct Params_FindOptionIndex {
        FString InOption; // 0x0
        int32_t Index; // 0x10
        bool bSuccessful; // 0x14
        char pad_15[0x3];
        int32_t CallFunc_Array_Find_ReturnValue; // 0x18
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_FindOptionIndex params{};
    params.InOption = (FString)InOption;
    params.Index = (int32_t)Index;
    params.bSuccessful = (bool)bSuccessful;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Index = params.Index;
    bSuccessful = params.bSuccessful;
}
void UUI_BP_PhxComboBox_C::GetSelectedOption(FString& SelectedOption, FString CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.GetSelectedOption"));
    struct Params_GetSelectedOption {
        FString SelectedOption; // 0x0
        FString CallFunc_Array_Get_Item; // 0x10
    }; // Size: 0x20
    Params_GetSelectedOption params{};
    params.SelectedOption = (FString)SelectedOption;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    SelectedOption = params.SelectedOption;
}
void UUI_BP_PhxComboBox_C::SetItemsTranslatable(bool ItemsTranslatable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.SetItemsTranslatable"));
    struct Params_SetItemsTranslatable {
        bool ItemsTranslatable; // 0x0
    }; // Size: 0x1
    Params_SetItemsTranslatable params{};
    params.ItemsTranslatable = (bool)ItemsTranslatable;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::GetSelectedIndex(int32_t& SelectedIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.GetSelectedIndex"));
    struct Params_GetSelectedIndex {
        int32_t SelectedIndex; // 0x0
    }; // Size: 0x4
    Params_GetSelectedIndex params{};
    params.SelectedIndex = (int32_t)SelectedIndex;
    ProcessEvent(func, &params);
    SelectedIndex = params.SelectedIndex;
}
void UUI_BP_PhxComboBox_C::OnHeaderButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnHeaderButtonHovered__DelegateSignature"));
    struct Params_OnHeaderButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_OnHeaderButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::PopulateItems(int32_t CurrentActiveIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_PhxComboBox_C::SetSelectedIndex(int32_t NewIndex, bool TriggerValueChangedEvent, FString CallFunc_Array_Get_Item) {}
void UUI_BP_PhxComboBox_C::OnSelectionChanged__DelegateSignature(FString NewSelection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnSelectionChanged__DelegateSignature"));
    struct Params_OnSelectionChanged__DelegateSignature {
        FString NewSelection; // 0x0
    }; // Size: 0x10
    Params_OnSelectionChanged__DelegateSignature params{};
    params.NewSelection = (FString)NewSelection;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::ItemClicked(UUI_BP_PhxComboBoxItem_C* Item, int32_t NewIndex, int32_t CallFunc_Array_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemClicked"));
    struct Params_ItemClicked {
        UUI_BP_PhxComboBoxItem_C* Item; // 0x0
        int32_t NewIndex; // 0x8
        int32_t CallFunc_Array_Find_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_ItemClicked params{};
    params.Item = (UUI_BP_PhxComboBoxItem_C*)Item;
    params.NewIndex = (int32_t)NewIndex;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::ItemUnhovered(UUI_BP_PhxComboBoxItem_C* UnhoveredItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ItemUnhovered"));
    struct Params_ItemUnhovered {
        UUI_BP_PhxComboBoxItem_C* UnhoveredItem; // 0x0
    }; // Size: 0x8
    Params_ItemUnhovered params{};
    params.UnhoveredItem = (UUI_BP_PhxComboBoxItem_C*)UnhoveredItem;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnMouseLeave(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_PhxComboBox_C::TogglePopout(bool ShouldExpand, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUI_BP_PhxComboBoxItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.TogglePopout"));
    struct Params_TogglePopout {
        bool ShouldExpand; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        ESlateVisibility Temp_byte_Variable; // 0x18
        ESlateVisibility Temp_byte_Variable_1; // 0x19
        char pad_1a[0x6];
        UUI_BP_PhxComboBoxItem_C* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x28
        bool Temp_bool_Variable; // 0x29
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x2a
        ESlateVisibility K2Node_Select_Default; // 0x2b
    }; // Size: 0x2c
    Params_TogglePopout params{};
    params.ShouldExpand = (bool)ShouldExpand;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_Array_Get_Item = (UUI_BP_PhxComboBoxItem_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnItemHovered__DelegateSignature(FString ItemHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemHovered__DelegateSignature"));
    struct Params_OnItemHovered__DelegateSignature {
        FString ItemHovered; // 0x0
    }; // Size: 0x10
    Params_OnItemHovered__DelegateSignature params{};
    params.ItemHovered = (FString)ItemHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnRemovedFromFocusPath(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnRemovedFromFocusPath"));
    struct Params_OnRemovedFromFocusPath {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnRemovedFromFocusPath params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::ExecuteUbergraph_UI_BP_PhxComboBox(int32_t EntryPoint, FPointerEvent K2Node_Event_MouseEvent, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, FFocusEvent K2Node_Event_InFocusEvent, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.ExecuteUbergraph_UI_BP_PhxComboBox"));
    struct Params_ExecuteUbergraph_UI_BP_PhxComboBox {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FPointerEvent K2Node_Event_MouseEvent; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x78
        bool K2Node_Event_IsDesignTime; // 0x79
        char pad_7a[0x2];
        FFocusEvent K2Node_Event_InFocusEvent; // 0x7c
        char pad_84[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x88
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x90
    }; // Size: 0x98
    Params_ExecuteUbergraph_UI_BP_PhxComboBox params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_MouseEvent = (FPointerEvent)K2Node_Event_MouseEvent;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_InFocusEvent = (FFocusEvent)K2Node_Event_InFocusEvent;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnItemClicked__DelegateSignature(FString ItemClicked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemClicked__DelegateSignature"));
    struct Params_OnItemClicked__DelegateSignature {
        FString ItemClicked; // 0x0
    }; // Size: 0x10
    Params_OnItemClicked__DelegateSignature params{};
    params.ItemClicked = (FString)ItemClicked;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnClose__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnClose__DelegateSignature"));
    struct Params_OnClose__DelegateSignature {
    }; // Size: 0x0
    Params_OnClose__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnHeaderButtonUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnHeaderButtonUnhovered__DelegateSignature"));
    struct Params_OnHeaderButtonUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_OnHeaderButtonUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnOpen__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnOpen__DelegateSignature"));
    struct Params_OnOpen__DelegateSignature {
    }; // Size: 0x0
    Params_OnOpen__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBox_C::OnItemUnhovered__DelegateSignature(FString ItemUnhovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBox.UI_BP_PhxComboBox_C.OnItemUnhovered__DelegateSignature"));
    struct Params_OnItemUnhovered__DelegateSignature {
        FString ItemUnhovered; // 0x0
    }; // Size: 0x10
    Params_OnItemUnhovered__DelegateSignature params{};
    params.ItemUnhovered = (FString)ItemUnhovered;
    ProcessEvent(func, &params);
}
