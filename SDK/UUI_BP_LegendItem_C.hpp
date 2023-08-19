#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "ULegendItem.hpp"
class UImage;
class UPhoenixRichTextBlock;
class UOverlaySlot;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_LegendItem_C : public ULegendItem {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    UImage* ButtonBG; // 0x388
    UPhoenixRichTextBlock* ButtonText; // 0x390
    UImage* ProgressBG; // 0x398
    UImage* ProgressFill; // 0x3a0
    UPhoenixRichTextBlock* TextString; // 0x3a8
    FRuntimeFloatCurve ProgressCurve; // 0x3b0
    int32_t ButtonFontSize; // 0x438
    float baseButtonPadding; // 0x43c
    float ImageSizeMin; // 0x440
    float ImageSizeMax; // 0x444
    static UUI_BP_LegendItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetDynamicPadding(FMargin K2Node_MakeStruct_Margin, FLegendItemData CallFunc_GetLegendItemData_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1);
    void SwapFillMaterials(EInputDeviceUsed Selection, float CurrentAlpha, bool K2Node_SwitchEnum_CmpSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
    void LegendItemDataChanged0(FString ButtonString, FString TextString, bool TextStringIsLocalized);
    void ProgressUsedChanged0(bool ProgressUsed);
    void ProgressChanged0(float Progress);
    void DisabledStateChanged0(bool Disabled);
    void SetTextColor0(FSlateColor InColor);
    void UpdateFillMeterStyle0(EInputDeviceUsed UsedInputDevice);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_LegendItem(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, FString K2Node_Event_ButtonString, FString K2Node_Event_TextString, bool K2Node_Event_TextStringIsLocalized, bool K2Node_Event_ProgressUsed, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, float K2Node_Event_Progress, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_Disabled, float CallFunc_EvalCurve_Value, FSlateColor K2Node_Event_InColor, EInputDeviceUsed K2Node_Event_UsedInputDevice, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_1, float K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
}; // Size: 0x448
#pragma pack(pop)
