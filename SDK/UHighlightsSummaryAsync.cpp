#include "FGfeSDKHighlightSummaryParams.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsSummaryAsync.hpp"
#include "UObject.hpp"
UHighlightsSummaryAsync* UHighlightsSummaryAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsSummaryAsync");
    return (UHighlightsSummaryAsync*)res;
}
UHighlightsSummaryAsync* UHighlightsSummaryAsync::HighlightsOpenSummary(UObject* WorldContextObject, FGfeSDKHighlightSummaryParams& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary"));
    struct Params_HighlightsOpenSummary {
        UObject* WorldContextObject; // 0x0
        FGfeSDKHighlightSummaryParams Params; // 0x8
        UHighlightsSummaryAsync* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_HighlightsOpenSummary params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FGfeSDKHighlightSummaryParams)Params;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UHighlightsSummaryAsync*)params.ReturnValue;
}
