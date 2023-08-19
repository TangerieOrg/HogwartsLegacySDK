#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsSetScreenshotAsync.hpp"
#include "UObject.hpp"
UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsSetScreenshotAsync");
    return (UHighlightsSetScreenshotAsync*)res;
}
UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::HighlightsSetScreenshot(UObject* WorldContextObject, FString GroupId, FString HighlightId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot"));
    struct Params_HighlightsSetScreenshot {
        UObject* WorldContextObject; // 0x0
        FString GroupId; // 0x8
        FString HighlightId; // 0x18
        UHighlightsSetScreenshotAsync* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_HighlightsSetScreenshot params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GroupId = (FString)GroupId;
    params.HighlightId = (FString)HighlightId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UHighlightsSetScreenshotAsync*)params.ReturnValue;
}
