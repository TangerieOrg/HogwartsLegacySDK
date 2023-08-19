#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_AudioLegendTooltipContent_C.hpp"
void UUI_BP_AudioLegendTooltipContent_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
UUI_BP_AudioLegendTooltipContent_C* UUI_BP_AudioLegendTooltipContent_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C");
    return (UUI_BP_AudioLegendTooltipContent_C*)res;
}
void UUI_BP_AudioLegendTooltipContent_C::ExecuteUbergraph_UI_BP_AudioLegendTooltipContent(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.ExecuteUbergraph_UI_BP_AudioLegendTooltipContent"));
    struct Params_ExecuteUbergraph_UI_BP_AudioLegendTooltipContent {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        FGeometry K2Node_Event_MyGeometry; // 0x8
        float K2Node_Event_InDeltaTime; // 0x40
    }; // Size: 0x44
    Params_ExecuteUbergraph_UI_BP_AudioLegendTooltipContent params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_AudioLegendTooltipContent_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_AudioLegendTooltipContent_C::SetIconInfo(FString IconName, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.SetIconInfo"));
    struct Params_SetIconInfo {
        FString IconName; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetIconInfo params{};
    params.IconName = (FString)IconName;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendTooltipContent_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendTooltipContent_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_AudioLegendTooltipContent.UI_BP_AudioLegendTooltipContent_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
