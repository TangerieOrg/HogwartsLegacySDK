#include "EGfeSDKHighlightSignificance.hpp"
#include "EGfeSDKHighlightType.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsGetNumberAsync.hpp"
#include "UObject.hpp"
UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsGetNumberAsync");
    return (UHighlightsGetNumberAsync*)res;
}
UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::HighlightsGetNumberOfHighlights(UObject* WorldContextObject, FString GroupId, EGfeSDKHighlightType& TagFilter, EGfeSDKHighlightSignificance& SignificanceFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights"));
    struct Params_HighlightsGetNumberOfHighlights {
        UObject* WorldContextObject; // 0x0
        FString GroupId; // 0x8
        EGfeSDKHighlightType TagFilter; // 0x18
        EGfeSDKHighlightSignificance SignificanceFilter; // 0x19
        char pad_1a[0x6];
        UHighlightsGetNumberAsync* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_HighlightsGetNumberOfHighlights params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GroupId = (FString)GroupId;
    params.TagFilter = (EGfeSDKHighlightType)TagFilter;
    params.SignificanceFilter = (EGfeSDKHighlightSignificance)SignificanceFilter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagFilter = params.TagFilter;
    SignificanceFilter = params.SignificanceFilter;
    return (UHighlightsGetNumberAsync*)params.ReturnValue;
}
