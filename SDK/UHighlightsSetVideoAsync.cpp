#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsSetVideoAsync.hpp"
#include "UObject.hpp"
UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsSetVideoAsync");
    return (UHighlightsSetVideoAsync*)res;
}
UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::HighlightsSetVideo(UObject* WorldContextObject, FString GroupId, FString HighlightId, int32_t& StartDelta, int32_t& EndDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo"));
    struct Params_HighlightsSetVideo {
        UObject* WorldContextObject; // 0x0
        FString GroupId; // 0x8
        FString HighlightId; // 0x18
        int32_t StartDelta; // 0x28
        int32_t EndDelta; // 0x2c
        UHighlightsSetVideoAsync* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_HighlightsSetVideo params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GroupId = (FString)GroupId;
    params.HighlightId = (FString)HighlightId;
    params.StartDelta = (int32_t)StartDelta;
    params.EndDelta = (int32_t)EndDelta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StartDelta = params.StartDelta;
    EndDelta = params.EndDelta;
    return (UHighlightsSetVideoAsync*)params.ReturnValue;
}
