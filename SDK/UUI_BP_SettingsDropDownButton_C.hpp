#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UOverlay;
class UUI_BP_PhxComboBox_C;
#pragma pack(push, 1)
class UUI_BP_SettingsDropDownButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHover; // 0x330
    UUI_BP_PhxComboBox_C* ComboBox; // 0x338
    UOverlay* DropdownOverlay; // 0x340
    char pad_348[0x10];
    FString DropDownTitle; // 0x358
    float DropdownWidth; // 0x368
    bool TranslateContents; // 0x36c
    char pad_36d[0x23];
    bool Scalefonts; // 0x390
    char pad_391[0x17];
    bool TranslateTitle; // 0x3a8
    char pad_3a9[0x17];
    static UUI_BP_SettingsDropDownButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetDropDownSize(float DesiredHeight);
    void GetSelectedIndex(int32_t& SelectedIndex, int32_t CallFunc_GetSelectedIndex_SelectedIndex);
    void GetSelectedOption(FString& SelectedOption, FString CallFunc_GetSelectedOption_SelectedOption);
    void SetDropDownIndex(int32_t NewIndex);
    void PopulateDropDownOptions(TArray<FString>& OptionsArray, int32_t OptionIndex);
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(FString NewSelection);
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_2_OnItemHovered__DelegateSignature(FString ItemHovered);
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnItemClicked__DelegateSignature(FString ItemClicked);
    void Construct();
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_5_OnOpen__DelegateSignature();
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_6_OnHeaderButtonHovered__DelegateSignature();
    void BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnHeaderButtonUnhovered__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_SettingsDropDownButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FString K2Node_ComponentBoundEvent_NewSelection, int32_t CallFunc_GetSelectedIndex_SelectedIndex, FString K2Node_ComponentBoundEvent_ItemHovered, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FString K2Node_ComponentBoundEvent_ItemClicked, int32_t CallFunc_PostEventAtLocation_ReturnValue_3, bool K2Node_Event_IsDesignTime);
    void DropDownOptionHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button, FString HoveredItemString);
    void DropdownOpened__DelegateSignature();
    void DropdownUnhovered__DelegateSignature();
    void DropdownHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button);
    void DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button);
}; // Size: 0x3c0
#pragma pack(pop)
