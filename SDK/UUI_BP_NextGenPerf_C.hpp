#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixRichTextBlock;
class UUI_BP_MenuTextButton_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UOverlay;
class UPhoenixGameSettings;
class UWidget;
class UPopupScreen;
class UOverlaySlot;
#pragma pack(push, 1)
class UUI_BP_NextGenPerf_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixRichTextBlock* balancedDesc; // 0x330
    UUI_BP_MenuTextButton_C* btn_Balanced; // 0x338
    UUI_BP_MenuTextButton_C* btn_Fidelity; // 0x340
    UUI_BP_MenuTextButton_C* btn_FidelityRT; // 0x348
    UUI_BP_MenuTextButton_C* btn_HFRPerformance; // 0x350
    UUI_BP_MenuTextButton_C* btn_Performance; // 0x358
    UPhoenixRichTextBlock* FidelityDescription; // 0x360
    UPhoenixRichTextBlock* FidWithRTDescription; // 0x368
    UPhoenixRichTextBlock* HFRdescription; // 0x370
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x378
    UOverlay* MainOverlay; // 0x380
    UPhoenixRichTextBlock* PerfDescription; // 0x388
    char pad_390[0x10];
    TArray<FLegendItemData> DefaultLegendData; // 0x3a0
    TArray<FString> PerformanceModesArray; // 0x3b0
    bool shouldShowRebootPopup; // 0x3c0
    char pad_3c1[0x57];
    UUI_BP_MenuTextButton_C* SelectedButton; // 0x418
    UUI_BP_MenuTextButton_C* hoveredButton; // 0x420
    char pad_428[0x50];
    static UUI_BP_NextGenPerf_C* StaticClass();
    void Performance_Button_Clicked(UUI_BP_MenuTextButton_C* ClickedButton, FString TempPerformanceMode, TArray<FString>& CallFunc_Map_Keys_Keys, TArray<UUI_BP_MenuTextButton_C*>& CallFunc_Map_Values_Values, int32_t CallFunc_Array_Find_ReturnValue, FString CallFunc_Array_Get_Item, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPopupScreen* CallFunc_ShowRaytracingRebootPopup_ReturnValue, bool CallFunc_PerformanceModeChangeRequiresReboot_ReturnValue, bool CallFunc_IsPerformanceModeSwitchingAvailable_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void InitPerformanceButtons(FString tempButtonID, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<FString>& CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetPerformanceMode_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetMenuLegend(TArray<FLegendItemData>& LegendData, TArray<FLegendItemData> ModifiedLegendData);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void ExecuteUbergraph_UI_BP_NextGenPerf(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_14);
    void PerfScreenDismissed__DelegateSignature();
}; // Size: 0x478
#pragma pack(pop)
