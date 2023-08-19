#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_CreatureByproduct_C;
class UHorizontalBox;
class UPhoenixTextBlock;
class UCreatureState;
class UUI_BP_CreatureNeedWidget_C;
class UUI_BP_NurtureProgressDiamond_C;
class UWidgetSwitcher;
#pragma pack(push, 1)
class UUI_BP_CreatureStatusSummary_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UUI_BP_CreatureByproduct_C* ByproductWidget; // 0x330
    UHorizontalBox* CooldownIconContainer; // 0x338
    UPhoenixTextBlock* CooldownText; // 0x340
    UUI_BP_CreatureNeedWidget_C* FeedNeed; // 0x348
    UUI_BP_CreatureNeedWidget_C* InteractionNeed; // 0x350
    UWidgetSwitcher* MasterSwitcher; // 0x358
    UUI_BP_CreatureNeedWidget_C* Minimized; // 0x360
    UWidgetSwitcher* NeedsSwitcher; // 0x368
    UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x370
    UCreatureState* CreatureState; // 0x378
    bool IsMinimized; // 0x380
    char pad_381[0x7];
    static UUI_BP_CreatureStatusSummary_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void UpdateCooldownTimer(float CallFunc_GetByproductCooldownProgress_ReturnValue, FTimespan CallFunc_GetByproductCooldownTimeLeft_ReturnValue);
    void SetNeedsMinimized(bool ShouldBeMinimized, bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32_t K2Node_Select_Default);
    void Update(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_AreAllNeedsMet_ReturnValue, bool CallFunc_IsIncubating_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue);
    void Setup(UCreatureState* InCreatureState, bool ShouldBeMinimized, bool CallFunc_IsValid_ReturnValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSomethingChanged();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_CreatureStatusSummary(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x388
#pragma pack(pop)
