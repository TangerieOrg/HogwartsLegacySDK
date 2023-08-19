#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UExpandableArea;
class UWidgetAnimation;
class UUI_BP_BroomBoostMeter_C;
class UUI_BP_LegendItem_C;
class UBorder;
class UProgressBar;
class UVerticalBox;
class USizeBox;
class UInvalidationBox;
class AFlyingBroom;
class UPhoenixGameSettings;
class UUIManager;
class UUMGSequencePlayer;
class AActor;
class UObjectStateInfo;
class UObject;
#pragma pack(push, 1)
class UUI_BP_BroomHUD_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideBroomControls; // 0x2f0
    UWidgetAnimation* ShowBroomControls; // 0x2f8
    UWidgetAnimation* ShowAndHideBroomControls; // 0x300
    UWidgetAnimation* HideBroomHUD; // 0x308
    UWidgetAnimation* ShowBroomHUD; // 0x310
    UUI_BP_LegendItem_C* AscendDescendCallout; // 0x318
    UUI_BP_LegendItem_C* BoostCallout; // 0x320
    UUI_BP_BroomBoostMeter_C* BroomBoostMeter; // 0x328
    UBorder* broomCalloutBorder; // 0x330
    UVerticalBox* CalloutsBox; // 0x338
    UBorder* collapsedCallout; // 0x340
    UUI_BP_LegendItem_C* DismountCallout; // 0x348
    UExpandableArea* expandableBroomCallouts; // 0x350
    UVerticalBox* FlightCallouts; // 0x358
    USizeBox* healthMeterProgress; // 0x360
    UCanvasPanel* healthPanel; // 0x368
    UProgressBar* healthProgressBar; // 0x370
    UUI_BP_LegendItem_C* HoldFlyCallout; // 0x378
    UInvalidationBox* InvalidationBoxBroomHUD; // 0x380
    UUI_BP_LegendItem_C* KeyboardFlyCallout; // 0x388
    UUI_BP_LegendItem_C* ToggleFlyCallout; // 0x390
    AFlyingBroom* FlyingBroom; // 0x398
    FHermesBPDelegateHandle ShowControlsHandle; // 0x3a0
    FHermesBPDelegateHandle ShowControlsHoldHandle; // 0x3b0
    FHermesBPDelegateHandle HideControlsHandle; // 0x3c0
    FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x3d0
    bool IsShown; // 0x3e0
    bool showHealthMeter; // 0x3e1
    bool ControlsHeld; // 0x3e2
    char pad_3e3[0x5];
    static UUI_BP_BroomHUD_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_0();
    void SetHealthBarVisibility(bool ShowHealthBar, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetToggleText(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue, FString CallFunc_SelectString_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData);
    void ConditionallyShowKeyboardControls(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void HideControls(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ShowControls(bool Hold, bool Temp_bool_Variable, UWidgetAnimation* K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue);
    void SetBroomCallouts(FString CallFunc_SelectString_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4);
    void Show(AFlyingBroom* FlyingBroom);
    void Hide();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_0();
    void OnInitialized();
    void OnBroomBoostAllowed(UObject* Caller);
    void OnBroomBoostDisallowed(UObject* Caller);
    void OnBroomForceHoverEnabled(UObject* Caller);
    void OnBroomForceHoverDisabled(UObject* Caller);
    void OnBroomDismountAllowed(UObject* Caller);
    void OnBroomDismountDisallowed(UObject* Caller);
    void OnBroomInputEnabled(UObject* Caller);
    void OnBroomInputDisabled(UObject* Caller);
    void BroomSaysShowControls(UObject* Caller);
    void HighBoostGainStart(UObject* Caller);
    void HighBoostGainEnd(UObject* Caller);
    void Destruct();
    void ExpandCallouts();
    void CollapseCallouts();
    void BroomSaysShowControlsHold(UObject* Caller);
    void BroomSaysHideControls(UObject* Caller);
    void BroomBoost(UObject* Caller, AActor* Actor);
    void BroomBoostEnd(UObject* Caller, AActor* Actor);
    void RefreshButtonCallouts(UObject* Caller);
    void ExecuteUbergraph_UI_BP_BroomHUD(int32_t EntryPoint);
}; // Size: 0x3e8
#pragma pack(pop)
