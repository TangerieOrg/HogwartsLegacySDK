#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UOverlay.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_PhxComboBox_C.hpp"
#include "UUI_BP_SettingsDropDownButton_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SettingsDropDownButton_C::DropdownOpened__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownOpened__DelegateSignature"));
    struct Params_DropdownOpened__DelegateSignature {
    }; // Size: 0x0
    Params_DropdownOpened__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::PopulateDropDownOptions(TArray<FString>& OptionsArray, int32_t OptionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.PopulateDropDownOptions"));
    struct Params_PopulateDropDownOptions {
        TArray<FString> OptionsArray; // 0x0
        int32_t OptionIndex; // 0x10
    }; // Size: 0x14
    Params_PopulateDropDownOptions params{};
    params.OptionsArray = (TArray<FString>)OptionsArray;
    params.OptionIndex = (int32_t)OptionIndex;
    ProcessEvent(func, &params);
    OptionsArray = params.OptionsArray;
}
UUI_BP_SettingsDropDownButton_C* UUI_BP_SettingsDropDownButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C");
    return (UUI_BP_SettingsDropDownButton_C*)res;
}
TArray<FString> UUI_BP_SettingsDropDownButton_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_SettingsDropDownButton_C::GetSelectedIndex(int32_t& SelectedIndex, int32_t CallFunc_GetSelectedIndex_SelectedIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GetSelectedIndex"));
    struct Params_GetSelectedIndex {
        int32_t SelectedIndex; // 0x0
        int32_t CallFunc_GetSelectedIndex_SelectedIndex; // 0x4
    }; // Size: 0x8
    Params_GetSelectedIndex params{};
    params.SelectedIndex = (int32_t)SelectedIndex;
    params.CallFunc_GetSelectedIndex_SelectedIndex = (int32_t)CallFunc_GetSelectedIndex_SelectedIndex;
    ProcessEvent(func, &params);
    SelectedIndex = params.SelectedIndex;
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(FString NewSelection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature {
        FString NewSelection; // 0x0
    }; // Size: 0x10
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature params{};
    params.NewSelection = (FString)NewSelection;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::SetDropDownSize(float DesiredHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.SetDropDownSize"));
    struct Params_SetDropDownSize {
        float DesiredHeight; // 0x0
    }; // Size: 0x4
    Params_SetDropDownSize params{};
    params.DesiredHeight = (float)DesiredHeight;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::SetDropDownIndex(int32_t NewIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.SetDropDownIndex"));
    struct Params_SetDropDownIndex {
        int32_t NewIndex; // 0x0
    }; // Size: 0x4
    Params_SetDropDownIndex params{};
    params.NewIndex = (int32_t)NewIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::GetSelectedOption(FString& SelectedOption, FString CallFunc_GetSelectedOption_SelectedOption) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.GetSelectedOption"));
    struct Params_GetSelectedOption {
        FString SelectedOption; // 0x0
        FString CallFunc_GetSelectedOption_SelectedOption; // 0x10
    }; // Size: 0x20
    Params_GetSelectedOption params{};
    params.SelectedOption = (FString)SelectedOption;
    params.CallFunc_GetSelectedOption_SelectedOption = (FString)CallFunc_GetSelectedOption_SelectedOption;
    ProcessEvent(func, &params);
    SelectedOption = params.SelectedOption;
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature(FString ItemHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature {
        FString ItemHovered; // 0x0
    }; // Size: 0x10
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature params{};
    params.ItemHovered = (FString)ItemHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::DropdownHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownHovered__DelegateSignature"));
    struct Params_DropdownHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_DropdownHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature(FString ItemClicked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature {
        FString ItemClicked; // 0x0
    }; // Size: 0x10
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature params{};
    params.ItemClicked = (FString)ItemClicked;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature"));
    struct Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::ExecuteUbergraph_UI_BP_SettingsDropDownButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FString K2Node_ComponentBoundEvent_NewSelection, int32_t CallFunc_GetSelectedIndex_SelectedIndex, FString K2Node_ComponentBoundEvent_ItemHovered, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FString K2Node_ComponentBoundEvent_ItemClicked, int32_t CallFunc_PostEventAtLocation_ReturnValue_3, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.ExecuteUbergraph_UI_BP_SettingsDropDownButton"));
    struct Params_ExecuteUbergraph_UI_BP_SettingsDropDownButton {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        FString K2Node_ComponentBoundEvent_NewSelection; // 0x10
        int32_t CallFunc_GetSelectedIndex_SelectedIndex; // 0x20
        char pad_24[0x4];
        FString K2Node_ComponentBoundEvent_ItemHovered; // 0x28
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x38
        char pad_3c[0x4];
        FString K2Node_ComponentBoundEvent_ItemClicked; // 0x40
        int32_t CallFunc_PostEventAtLocation_ReturnValue_3; // 0x50
        bool K2Node_Event_IsDesignTime; // 0x54
    }; // Size: 0x55
    Params_ExecuteUbergraph_UI_BP_SettingsDropDownButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_ComponentBoundEvent_NewSelection = (FString)K2Node_ComponentBoundEvent_NewSelection;
    params.CallFunc_GetSelectedIndex_SelectedIndex = (int32_t)CallFunc_GetSelectedIndex_SelectedIndex;
    params.K2Node_ComponentBoundEvent_ItemHovered = (FString)K2Node_ComponentBoundEvent_ItemHovered;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.K2Node_ComponentBoundEvent_ItemClicked = (FString)K2Node_ComponentBoundEvent_ItemClicked;
    params.CallFunc_PostEventAtLocation_ReturnValue_3 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_3;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::DropDownOptionHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button, FString HoveredItemString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropDownOptionHovered__DelegateSignature"));
    struct Params_DropDownOptionHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
        FString HoveredItemString; // 0x8
    }; // Size: 0x18
    Params_DropDownOptionHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    params.HoveredItemString = (FString)HoveredItemString;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::DropdownUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropdownUnhovered__DelegateSignature"));
    struct Params_DropdownUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_DropdownUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDropDownButton_C::DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsDropDownButton.UI_BP_SettingsDropDownButton_C.DropDownOptionChanged__DelegateSignature"));
    struct Params_DropDownOptionChanged__DelegateSignature {
        int32_t NewOptionIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_SettingsDropDownButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_DropDownOptionChanged__DelegateSignature params{};
    params.NewOptionIndex = (int32_t)NewOptionIndex;
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
