#include "FGfeSDKHighlightConfigParams.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsConfigureAsync.hpp"
#include "UObject.hpp"
UHighlightsConfigureAsync* UHighlightsConfigureAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsConfigureAsync");
    return (UHighlightsConfigureAsync*)res;
}
UHighlightsConfigureAsync* UHighlightsConfigureAsync::HighlightsConfigure(UObject* WorldContextObject, FGfeSDKHighlightConfigParams& ConfigParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure"));
    struct Params_HighlightsConfigure {
        UObject* WorldContextObject; // 0x0
        FGfeSDKHighlightConfigParams ConfigParams; // 0x8
        UHighlightsConfigureAsync* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_HighlightsConfigure params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ConfigParams = (FGfeSDKHighlightConfigParams)ConfigParams;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConfigParams = params.ConfigParams;
    return (UHighlightsConfigureAsync*)params.ReturnValue;
}
