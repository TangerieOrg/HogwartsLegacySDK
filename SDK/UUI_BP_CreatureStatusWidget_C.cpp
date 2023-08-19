#include "ECreaturePregnancyState.hpp"
#include "FDateTime.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUI_BP_CreatureStatusWidget_C.hpp"
#include "UUI_BP_NurtureProgressDiamond_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
UUI_BP_CreatureStatusWidget_C* UUI_BP_CreatureStatusWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C");
    return (UUI_BP_CreatureStatusWidget_C*)res;
}
TArray<FString> UUI_BP_CreatureStatusWidget_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_IsVisible_ReturnValue) {}
void UUI_BP_CreatureStatusWidget_C::Update_Pregnancy_Status(FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue) {}
void UUI_BP_CreatureStatusWidget_C::Update_Creature_Status(bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.Update Creature Status"));
    struct Params_Update_Creature_Status {
        bool CallFunc_GetIsByproductReady_ReturnValue; // 0x0
        bool CallFunc_IsByproductOnCooldown_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_Update_Creature_Status params{};
    params.CallFunc_GetIsByproductReady_ReturnValue = (bool)CallFunc_GetIsByproductReady_ReturnValue;
    params.CallFunc_IsByproductOnCooldown_ReturnValue = (bool)CallFunc_IsByproductOnCooldown_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusWidget_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusWidget_C::SetCreatureState(UCreatureState* CreatureState, FDateTime PregnancyTimeRemaining, FName CallFunc_GetTypeID_ReturnValue, FString Temp_string_Variable) {}
void UUI_BP_CreatureStatusWidget_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusWidget_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusWidget_C::OnPregnancyStateChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnPregnancyStateChanged"));
    struct Params_OnPregnancyStateChanged {
    }; // Size: 0x0
    Params_OnPregnancyStateChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusWidget_C::ExecuteUbergraph_UI_BP_CreatureStatusWidget(int32_t EntryPoint, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, FName CallFunc_GetTypeID_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.ExecuteUbergraph_UI_BP_CreatureStatusWidget"));
    struct Params_ExecuteUbergraph_UI_BP_CreatureStatusWidget {
        int32_t EntryPoint; // 0x0
        int32_t K2Node_Event_IntroType; // 0x4
        float K2Node_Event_IntroDuration; // 0x8
        FName CallFunc_GetTypeID_ReturnValue; // 0xc
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x14
        bool K2Node_SwitchInteger_CmpSuccess; // 0x18
        char pad_19[0x3];
        FGeometry K2Node_Event_MyGeometry; // 0x1c
        float K2Node_Event_InDeltaTime; // 0x54
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x58
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0x60
        int32_t K2Node_Event_OutroType; // 0x68
        float K2Node_Event_OutroDuration; // 0x6c
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x70
        bool K2Node_SwitchInteger_CmpSuccess_1; // 0x74
        char pad_75[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x78
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x80
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x88
        bool CallFunc_IsValid_ReturnValue; // 0x89
    }; // Size: 0x8a
    Params_ExecuteUbergraph_UI_BP_CreatureStatusWidget params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.K2Node_SwitchInteger_CmpSuccess_1 = (bool)K2Node_SwitchInteger_CmpSuccess_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
