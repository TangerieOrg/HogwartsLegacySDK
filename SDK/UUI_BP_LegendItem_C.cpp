#include "EInputDeviceUsed.hpp"
#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_LegendItem_C.hpp"
UUI_BP_LegendItem_C* UUI_BP_LegendItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C");
    return (UUI_BP_LegendItem_C*)res;
}
void UUI_BP_LegendItem_C::SetDynamicPadding(FMargin K2Node_MakeStruct_Margin, FLegendItemData CallFunc_GetLegendItemData_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.SetDynamicPadding"));
    struct Params_SetDynamicPadding {
        FMargin K2Node_MakeStruct_Margin; // 0x0
        FLegendItemData CallFunc_GetLegendItemData_ReturnValue; // 0x10
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x40
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x48
        float CallFunc_FClamp_ReturnValue; // 0x4c
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x50
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x58
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x5c
        FMargin K2Node_MakeStruct_Margin_1; // 0x60
    }; // Size: 0x70
    Params_SetDynamicPadding params{};
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_GetLegendItemData_ReturnValue = (FLegendItemData)CallFunc_GetLegendItemData_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_LegendItem_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_LegendItem_C::SwapFillMaterials(EInputDeviceUsed Selection, float CurrentAlpha, bool K2Node_SwitchEnum_CmpSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.SwapFillMaterials"));
    struct Params_SwapFillMaterials {
        EInputDeviceUsed Selection; // 0x0
        char pad_1[0x3];
        float CurrentAlpha; // 0x4
        bool K2Node_SwitchEnum_CmpSuccess; // 0x8
        char pad_9[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
        bool CallFunc_IsPCPlatform_ReturnValue; // 0x18
        char pad_19[0x3];
        float CallFunc_K2_GetScalarParameterValue_ReturnValue; // 0x1c
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x20
    }; // Size: 0x28
    Params_SwapFillMaterials params{};
    params.Selection = (EInputDeviceUsed)Selection;
    params.CurrentAlpha = (float)CurrentAlpha;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_IsPCPlatform_ReturnValue = (bool)CallFunc_IsPCPlatform_ReturnValue;
    params.CallFunc_K2_GetScalarParameterValue_ReturnValue = (float)CallFunc_K2_GetScalarParameterValue_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::LegendItemDataChanged0(FString ButtonString, FString TextString, bool TextStringIsLocalized) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.LegendItemDataChanged"));
    struct Params_LegendItemDataChanged {
        FString ButtonString; // 0x0
        FString TextString; // 0x10
        bool TextStringIsLocalized; // 0x20
    }; // Size: 0x21
    Params_LegendItemDataChanged params{};
    params.ButtonString = (FString)ButtonString;
    params.TextString = (FString)TextString;
    params.TextStringIsLocalized = (bool)TextStringIsLocalized;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::ProgressUsedChanged0(bool ProgressUsed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.ProgressUsedChanged"));
    struct Params_ProgressUsedChanged {
        bool ProgressUsed; // 0x0
    }; // Size: 0x1
    Params_ProgressUsedChanged params{};
    params.ProgressUsed = (bool)ProgressUsed;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::ProgressChanged0(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.ProgressChanged"));
    struct Params_ProgressChanged {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_ProgressChanged params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::DisabledStateChanged0(bool Disabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.DisabledStateChanged"));
    struct Params_DisabledStateChanged {
        bool Disabled; // 0x0
    }; // Size: 0x1
    Params_DisabledStateChanged params{};
    params.Disabled = (bool)Disabled;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::SetTextColor0(FSlateColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.SetTextColor"));
    struct Params_SetTextColor {
        FSlateColor InColor; // 0x0
    }; // Size: 0x28
    Params_SetTextColor params{};
    params.InColor = (FSlateColor)InColor;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::UpdateFillMeterStyle0(EInputDeviceUsed UsedInputDevice) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.UpdateFillMeterStyle"));
    struct Params_UpdateFillMeterStyle {
        EInputDeviceUsed UsedInputDevice; // 0x0
    }; // Size: 0x1
    Params_UpdateFillMeterStyle params{};
    params.UsedInputDevice = (EInputDeviceUsed)UsedInputDevice;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendItem_C::ExecuteUbergraph_UI_BP_LegendItem(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, FString K2Node_Event_ButtonString, FString K2Node_Event_TextString, bool K2Node_Event_TextStringIsLocalized, bool K2Node_Event_ProgressUsed, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, float K2Node_Event_Progress, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_Disabled, float CallFunc_EvalCurve_Value, FSlateColor K2Node_Event_InColor, EInputDeviceUsed K2Node_Event_UsedInputDevice, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_1, float K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_LegendItem.UI_BP_LegendItem_C.ExecuteUbergraph_UI_BP_LegendItem"));
    struct Params_ExecuteUbergraph_UI_BP_LegendItem {
        int32_t EntryPoint; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x4
        bool Temp_bool_Variable; // 0x5
        char pad_6[0x2];
        FString K2Node_Event_ButtonString; // 0x8
        FString K2Node_Event_TextString; // 0x18
        bool K2Node_Event_TextStringIsLocalized; // 0x28
        bool K2Node_Event_ProgressUsed; // 0x29
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x2a
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x2b
        float K2Node_Event_Progress; // 0x2c
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x30
        bool K2Node_Event_Disabled; // 0x38
        char pad_39[0x3];
        float CallFunc_EvalCurve_Value; // 0x3c
        FSlateColor K2Node_Event_InColor; // 0x40
        EInputDeviceUsed K2Node_Event_UsedInputDevice; // 0x68
        char pad_69[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x70
        float Temp_float_Variable; // 0x78
        float Temp_float_Variable_1; // 0x7c
        bool K2Node_Event_IsDesignTime; // 0x80
        char pad_81[0x7];
        FSlateFontInfo K2Node_MakeStruct_SlateFontInfo; // 0x88
        bool CallFunc_IsValid_ReturnValue; // 0xe0
        bool CallFunc_IsValid_ReturnValue_1; // 0xe1
        bool CallFunc_IsValid_ReturnValue_2; // 0xe2
        bool Temp_bool_Variable_1; // 0xe3
        ESlateVisibility Temp_byte_Variable_1; // 0xe4
        char pad_e5[0x3];
        float K2Node_Select_Default; // 0xe8
        ESlateVisibility K2Node_Select_Default_1; // 0xec
    }; // Size: 0xed
    Params_ExecuteUbergraph_UI_BP_LegendItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Event_ButtonString = (FString)K2Node_Event_ButtonString;
    params.K2Node_Event_TextString = (FString)K2Node_Event_TextString;
    params.K2Node_Event_TextStringIsLocalized = (bool)K2Node_Event_TextStringIsLocalized;
    params.K2Node_Event_ProgressUsed = (bool)K2Node_Event_ProgressUsed;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.K2Node_Event_Progress = (float)K2Node_Event_Progress;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.K2Node_Event_Disabled = (bool)K2Node_Event_Disabled;
    params.CallFunc_EvalCurve_Value = (float)CallFunc_EvalCurve_Value;
    params.K2Node_Event_InColor = (FSlateColor)K2Node_Event_InColor;
    params.K2Node_Event_UsedInputDevice = (EInputDeviceUsed)K2Node_Event_UsedInputDevice;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeStruct_SlateFontInfo = (FSlateFontInfo)K2Node_MakeStruct_SlateFontInfo;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
