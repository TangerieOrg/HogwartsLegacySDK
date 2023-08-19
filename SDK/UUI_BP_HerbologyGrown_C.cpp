#include "AHerbPlot.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHerbPlotState.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_HerbologyGrown_C.hpp"
#include "UUI_BP_NurtureProgressDiamond_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_HerbologyGrown_C* UUI_BP_HerbologyGrown_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C");
    return (UUI_BP_HerbologyGrown_C*)res;
}
TArray<FString> UUI_BP_HerbologyGrown_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_HerbologyGrown_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyGrown_C::SetPlantDetails(FName PlantID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_GetYield_ReturnValue) {}
void UUI_BP_HerbologyGrown_C::RefreshWidget(AHerbPlot* Plot, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.RefreshWidget"));
    struct Params_RefreshWidget {
        AHerbPlot* Plot; // 0x0
        UHerbPlotState* CallFunc_GetPlotState_ReturnValue; // 0x8
        FName CallFunc_GetPlantID_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RefreshWidget params{};
    params.Plot = (AHerbPlot*)Plot;
    params.CallFunc_GetPlotState_ReturnValue = (UHerbPlotState*)CallFunc_GetPlotState_ReturnValue;
    params.CallFunc_GetPlantID_ReturnValue = (FName)CallFunc_GetPlantID_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyGrown_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyGrown_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyGrown_C::ExecuteUbergraph_UI_BP_HerbologyGrown(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyGrown.UI_BP_HerbologyGrown_C.ExecuteUbergraph_UI_BP_HerbologyGrown"));
    struct Params_ExecuteUbergraph_UI_BP_HerbologyGrown {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        int32_t K2Node_Event_IntroType; // 0x8
        float K2Node_Event_IntroDuration; // 0xc
        int32_t K2Node_Event_OutroType; // 0x10
        float K2Node_Event_OutroDuration; // 0x14
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x18
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x1c
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_UI_BP_HerbologyGrown params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
