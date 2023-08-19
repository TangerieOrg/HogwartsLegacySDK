#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_SimpleLegend_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SimpleLegend_Screen_C* UUI_BP_SimpleLegend_Screen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C");
    return (UUI_BP_SimpleLegend_Screen_C*)res;
}
void UUI_BP_SimpleLegend_Screen_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_SimpleLegend_Screen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_SimpleLegend_Screen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleLegend_Screen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleLegend_Screen_C::ExecuteUbergraph_UI_BP_SimpleLegend_Screen(int32_t EntryPoint, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, int32_t K2Node_Event_OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_SimpleLegend_Screen.UI_BP_SimpleLegend_Screen_C.ExecuteUbergraph_UI_BP_SimpleLegend_Screen"));
    struct Params_ExecuteUbergraph_UI_BP_SimpleLegend_Screen {
        int32_t EntryPoint; // 0x0
        int32_t K2Node_Event_IntroType; // 0x4
        float K2Node_Event_IntroDuration; // 0x8
        int32_t K2Node_Event_OutroType_1; // 0xc
        float K2Node_Event_OutroDuration; // 0x10
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x14
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x18
        char pad_1c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x28
        int32_t K2Node_Event_OutroType; // 0x30
    }; // Size: 0x34
    Params_ExecuteUbergraph_UI_BP_SimpleLegend_Screen params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_OutroType_1 = (int32_t)K2Node_Event_OutroType_1;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    ProcessEvent(func, &params);
}
