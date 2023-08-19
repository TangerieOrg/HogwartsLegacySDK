#include "FButtonStyle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_PhxComboBoxItem_C.hpp"
void UUI_BP_PhxComboBoxItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_PhxComboBoxItem_C* UUI_BP_PhxComboBoxItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C");
    return (UUI_BP_PhxComboBoxItem_C*)res;
}
TArray<FString> UUI_BP_PhxComboBoxItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_PhxComboBoxItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::UpdateDynamicStyle(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FSlateColor K2Node_Select_Default, FSlateBrush K2Node_Select_Default_1, FSlateBrush K2Node_Select_Default_2, FButtonStyle K2Node_MakeStruct_ButtonStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.UpdateDynamicStyle"));
    struct Params_UpdateDynamicStyle {
        bool Temp_bool_Variable; // 0x0
        bool Temp_bool_Variable_1; // 0x1
        bool Temp_bool_Variable_2; // 0x2
        char pad_3[0x5];
        FSlateColor K2Node_Select_Default; // 0x8
        FSlateBrush K2Node_Select_Default_1; // 0x30
        FSlateBrush K2Node_Select_Default_2; // 0xb8
        FButtonStyle K2Node_MakeStruct_ButtonStyle; // 0x140
    }; // Size: 0x3b8
    Params_UpdateDynamicStyle params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default = (FSlateColor)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FSlateBrush)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (FSlateBrush)K2Node_Select_Default_2;
    params.K2Node_MakeStruct_ButtonStyle = (FButtonStyle)K2Node_MakeStruct_ButtonStyle;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::SetIsActive(bool ACTIVE) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.SetIsActive"));
    struct Params_SetIsActive {
        bool ACTIVE; // 0x0
    }; // Size: 0x1
    Params_SetIsActive params{};
    params.ACTIVE = (bool)ACTIVE;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::OnItemClicked__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemClicked__DelegateSignature"));
    struct Params_OnItemClicked__DelegateSignature {
        UUI_BP_PhxComboBoxItem_C* Item; // 0x0
    }; // Size: 0x8
    Params_OnItemClicked__DelegateSignature params{};
    params.Item = (UUI_BP_PhxComboBoxItem_C*)Item;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::ExecuteUbergraph_UI_BP_PhxComboBoxItem(int32_t EntryPoint) {}
void UUI_BP_PhxComboBoxItem_C::OnItemUnhovered__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemUnhovered__DelegateSignature"));
    struct Params_OnItemUnhovered__DelegateSignature {
        UUI_BP_PhxComboBoxItem_C* Item; // 0x0
    }; // Size: 0x8
    Params_OnItemUnhovered__DelegateSignature params{};
    params.Item = (UUI_BP_PhxComboBoxItem_C*)Item;
    ProcessEvent(func, &params);
}
void UUI_BP_PhxComboBoxItem_C::OnItemHovered__DelegateSignature(UUI_BP_PhxComboBoxItem_C* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_PhxComboBoxItem.UI_BP_PhxComboBoxItem_C.OnItemHovered__DelegateSignature"));
    struct Params_OnItemHovered__DelegateSignature {
        UUI_BP_PhxComboBoxItem_C* Item; // 0x0
    }; // Size: 0x8
    Params_OnItemHovered__DelegateSignature params{};
    params.Item = (UUI_BP_PhxComboBoxItem_C*)Item;
    ProcessEvent(func, &params);
}
