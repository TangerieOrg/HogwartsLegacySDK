#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UHighlightsCloseGroupAsync.hpp"
#include "UObject.hpp"
UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsCloseGroupAsync");
    return (UHighlightsCloseGroupAsync*)res;
}
UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::HighlightsCloseGroup(UObject* WorldContextObject, FString GroupId, bool& DestroyHighlights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup"));
    struct Params_HighlightsCloseGroup {
        UObject* WorldContextObject; // 0x0
        FString GroupId; // 0x8
        bool DestroyHighlights; // 0x18
        char pad_19[0x7];
        UHighlightsCloseGroupAsync* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_HighlightsCloseGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GroupId = (FString)GroupId;
    params.DestroyHighlights = (bool)DestroyHighlights;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DestroyHighlights = params.DestroyHighlights;
    return (UHighlightsCloseGroupAsync*)params.ReturnValue;
}
