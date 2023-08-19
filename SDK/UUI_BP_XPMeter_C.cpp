#include "ESlateVisibility.hpp"
#include "FExperienceChange.hpp"
#include "FFormatArgumentData.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UInvalidationBox.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_HealthIncrease_C.hpp"
#include "UUI_BP_XPMeter_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
#include "UXPMeterBase.hpp"
UUI_BP_XPMeter_C* UUI_BP_XPMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C");
    return (UUI_BP_XPMeter_C*)res;
}
void UUI_BP_XPMeter_C::ShowTextBackground(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.ShowTextBackground"));
    struct Params_ShowTextBackground {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowTextBackground params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::SequenceEvent__ENTRYPOINTUI_BP_XPMeter_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.SequenceEvent__ENTRYPOINTUI_BP_XPMeter_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_XPMeter_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_XPMeter_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::SetPlayerLevelText(int32_t Level) {}
void UUI_BP_XPMeter_C::HideTextBackground(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.HideTextBackground"));
    struct Params_HideTextBackground {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideTextBackground params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::ContinueCleanUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.ContinueCleanUp"));
    struct Params_ContinueCleanUp {
    }; // Size: 0x0
    Params_ContinueCleanUp params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showXPCrest_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::TryIncrementActiveNotification(FExperienceChange XPChangeData, bool& Success, int32_t CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FExperienceChange K2Node_MakeStruct_ExperienceChange, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {}
void UUI_BP_XPMeter_C::CleanUpLevelUpNotification(UTutorialSystem* CallFunc_Get_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.CleanUpLevelUpNotification"));
    struct Params_CleanUpLevelUpNotification {
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x0
        ESlateVisibility CallFunc_GetVisibility_ReturnValue; // 0x8
        bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue; // 0x9
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0xa
        bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_CleanUpLevelUpNotification params{};
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetVisibility_ReturnValue = (ESlateVisibility)CallFunc_GetVisibility_ReturnValue;
    params.CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue = (bool)CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::GetHouseAssets(FString& CrestID, FLinearColor& EffectColor, FLinearColor TempHouseEffectColor, FString TempCrestID, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.GetHouseAssets"));
    struct Params_GetHouseAssets {
        FString CrestID; // 0x0
        FLinearColor EffectColor; // 0x10
        FLinearColor TempHouseEffectColor; // 0x20
        FString TempCrestID; // 0x30
        UUIManager* CallFunc_Get_ReturnValue; // 0x40
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x48
        bool K2Node_SwitchString_CmpSuccess; // 0x58
    }; // Size: 0x59
    Params_GetHouseAssets params{};
    params.CrestID = (FString)CrestID;
    params.EffectColor = (FLinearColor)EffectColor;
    params.TempHouseEffectColor = (FLinearColor)TempHouseEffectColor;
    params.TempCrestID = (FString)TempCrestID;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    ProcessEvent(func, &params);
    CrestID = params.CrestID;
    EffectColor = params.EffectColor;
}
void UUI_BP_XPMeter_C::QueueXPGainedNotification(FExperienceChange Data, bool CallFunc_TryStackNotification_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_TryIncrementActiveNotification_Success, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.QueueXPGainedNotification"));
    struct Params_QueueXPGainedNotification {
        FExperienceChange Data; // 0x0
        bool CallFunc_TryStackNotification_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x24
        bool CallFunc_TryIncrementActiveNotification_Success; // 0x28
        char pad_29[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_QueueXPGainedNotification params{};
    params.Data = (FExperienceChange)Data;
    params.CallFunc_TryStackNotification_ReturnValue = (bool)CallFunc_TryStackNotification_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_TryIncrementActiveNotification_Success = (bool)CallFunc_TryIncrementActiveNotification_Success;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::Show_Level_Up_Text(bool AwardTalentPoint, float StartTime, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, int32_t CallFunc_MakeLiteralInt_ReturnValue) {}
void UUI_BP_XPMeter_C::TutorialSaysHighlightXPMeter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.TutorialSaysHighlightXPMeter"));
    struct Params_TutorialSaysHighlightXPMeter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysHighlightXPMeter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::ShowXPGain(bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString CallFunc_GetHouseAssets_CrestID, FLinearColor CallFunc_GetHouseAssets_EffectColor) {}
void UUI_BP_XPMeter_C::OnExpNotificationApproved(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.OnExpNotificationApproved"));
    struct Params_OnExpNotificationApproved {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnExpNotificationApproved params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4"));
    struct Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::TutorialSaysCloseXPMeter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.TutorialSaysCloseXPMeter"));
    struct Params_TutorialSaysCloseXPMeter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysCloseXPMeter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::OnXPAdded(float FillPct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.OnXPAdded"));
    struct Params_OnXPAdded {
        float FillPct; // 0x0
    }; // Size: 0x4
    Params_OnXPAdded params{};
    params.FillPct = (float)FillPct;
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::OnXPFillWrap() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.OnXPFillWrap"));
    struct Params_OnXPFillWrap {
    }; // Size: 0x0
    Params_OnXPFillWrap params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::OnFinishAddingXP() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.OnFinishAddingXP"));
    struct Params_OnFinishAddingXP {
    }; // Size: 0x0
    Params_OnFinishAddingXP params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::ExecuteUbergraph_UI_BP_XPMeter(int32_t EntryPoint) {}
void UUI_BP_XPMeter_C::PostFillDelayComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.PostFillDelayComplete"));
    struct Params_PostFillDelayComplete {
    }; // Size: 0x0
    Params_PostFillDelayComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_XPMeter_C::WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/XPMeter/UI_BP_XPMeter.UI_BP_XPMeter_C.WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showLevelUpText_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
