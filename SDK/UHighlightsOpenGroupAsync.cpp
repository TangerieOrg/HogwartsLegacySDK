#include "FGfeSDKHighlightOpenGroupParams.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsOpenGroupAsync.hpp"
#include "UObject.hpp"
UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsOpenGroupAsync");
    return (UHighlightsOpenGroupAsync*)res;
}
UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::HighlightsOpenGroup(UObject* WorldContextObject, FGfeSDKHighlightOpenGroupParams& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup"));
    struct Params_HighlightsOpenGroup {
        UObject* WorldContextObject; // 0x0
        FGfeSDKHighlightOpenGroupParams Params; // 0x8
        UHighlightsOpenGroupAsync* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_HighlightsOpenGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FGfeSDKHighlightOpenGroupParams)Params;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UHighlightsOpenGroupAsync*)params.ReturnValue;
}
