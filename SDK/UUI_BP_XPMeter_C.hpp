#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FExperienceChange.hpp"
#include "FFormatArgumentData.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UXPMeterBase.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UBorder;
class UUI_BP_HealthIncrease_C;
class UImage;
class UInvalidationBox;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUMGSequencePlayer;
class UTutorialSystem;
class UUIManager;
class UExperienceManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_XPMeter_C : public UXPMeterBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x310
    UWidgetAnimation* hideTextBackgroundAnim; // 0x318
    UWidgetAnimation* HideLevelUpText; // 0x320
    UWidgetAnimation* showTextBackgroundAnim; // 0x328
    UWidgetAnimation* highlight; // 0x330
    UWidgetAnimation* showXPCrest; // 0x338
    UWidgetAnimation* FadeOut; // 0x340
    UWidgetAnimation* HideXPText; // 0x348
    UWidgetAnimation* ShowXPText; // 0x350
    UWidgetAnimation* showLevelUpText; // 0x358
    UWidgetAnimation* showLevelUpBanner; // 0x360
    UUI_BP_HealthIncrease_C* HealthIncreaseTag; // 0x368
    UImage* HouseCrest; // 0x370
    UInvalidationBox* InvalidationBox_XPMeter; // 0x378
    UCanvasPanel* levelUpRoot; // 0x380
    UPhoenixTextBlock* LevelUpText; // 0x388
    UPhoenixTextBlock* PlayerLevel; // 0x390
    UBorder* textBorder; // 0x398
    UImage* XPFill_Image; // 0x3a0
    UHorizontalBox* XPHorizontalBox; // 0x3a8
    UPhoenixTextBlock* XPtext; // 0x3b0
    FHermesBPDelegateHandle TutorialCloseXPMeterEventHandle; // 0x3b8
    FHermesBPDelegateHandle TutorialHighlightXPMeterEventHandle; // 0x3c8
    FTimerHandle NotificationTimerHandle; // 0x3d8
    float NotifcationDelay; // 0x3e0
    bool Active_Notification_Stackable; // 0x3e4
    char pad_3e5[0x3];
    float FillDuration; // 0x3e8
    bool LevelUpAnimComplete; // 0x3ec
    bool PostFillDelayCompleted; // 0x3ed
    char pad_3ee[0x2];
    static UUI_BP_XPMeter_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_XPMeter_0();
    void SetPlayerLevelText(int32_t Level);
    void HideTextBackground(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowTextBackground(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ContinueCleanUp();
    void TryIncrementActiveNotification(FExperienceChange XPChangeData, bool& Success, int32_t CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FExperienceChange K2Node_MakeStruct_ExperienceChange, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void CleanUpLevelUpNotification(UTutorialSystem* CallFunc_Get_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void GetHouseAssets(FString& CrestID, FLinearColor& EffectColor, FLinearColor TempHouseEffectColor, FString TempCrestID, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
    void QueueXPGainedNotification(FExperienceChange Data, bool CallFunc_TryStackNotification_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_TryIncrementActiveNotification_Success, UUIManager* CallFunc_Get_ReturnValue);
    void Show_Level_Up_Text(bool AwardTalentPoint, float StartTime, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, int32_t CallFunc_MakeLiteralInt_ReturnValue);
    void ShowXPGain(bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString CallFunc_GetHouseAssets_CrestID, FLinearColor CallFunc_GetHouseAssets_EffectColor);
    void Construct();
    void OnExpNotificationApproved(UObject* Caller);
    void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4();
    void TutorialSaysCloseXPMeter(UObject* Caller);
    void TutorialSaysHighlightXPMeter(UObject* Caller);
    void OnXPAdded(float FillPct);
    void OnXPFillWrap();
    void OnFinishAddingXP();
    void WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_0();
    void PostFillDelayComplete();
    void WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_1();
    void ExecuteUbergraph_UI_BP_XPMeter(int32_t EntryPoint);
}; // Size: 0x3f0
#pragma pack(pop)
