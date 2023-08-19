#pragma once
#include <cstdint>
#include "ECreaturePregnancyState.hpp"
#include "FDateTime.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_CreatureStatusSummary_C;
class UWidgetAnimation;
class UPhoenixRichTextBlock;
class UCreatureState;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_NurtureProgressDiamond_C;
class UWidgetSwitcher;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_CreatureStatusWidget_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* InfoPanel_OUT; // 0x330
    UWidgetAnimation* InfoContent_OUT; // 0x338
    UPhoenixRichTextBlock* ButtonText_1; // 0x340
    UPhoenixTextBlock* descriptionText; // 0x348
    UHorizontalBox* HarvestPrompt; // 0x350
    UPhoenixTextBlock* Label_1; // 0x358
    UPhoenixTextBlock* NurtureDescription; // 0x360
    UPhoenixTextBlock* NurtureText; // 0x368
    UPhoenixTextBlock* OffspringText; // 0x370
    UPhoenixTextBlock* PregnancyStatetext; // 0x378
    UUI_BP_NurtureProgressDiamond_C* PregnancyStatus; // 0x380
    UPhoenixTextBlock* PregnancyTimeText; // 0x388
    UUI_BP_CreatureStatusSummary_C* StatusSummary; // 0x390
    UWidgetSwitcher* StatusWidgetSwitcher; // 0x398
    UCreatureState* CreatureState; // 0x3a0
    FName CreatureTypeID; // 0x3a8
    static UUI_BP_CreatureStatusWidget_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
    void Update_Pregnancy_Status(FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue);
    void Update_Creature_Status(bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue);
    void SetCreatureState(UCreatureState* CreatureState, FDateTime PregnancyTimeRemaining, FName CallFunc_GetTypeID_ReturnValue, FString Temp_string_Variable);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnPregnancyStateChanged();
    void ExecuteUbergraph_UI_BP_CreatureStatusWidget(int32_t EntryPoint, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, FName CallFunc_GetTypeID_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x3b0
#pragma pack(pop)
