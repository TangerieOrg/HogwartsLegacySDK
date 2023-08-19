#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UInitHighlights.hpp"
#include "UObject.hpp"
UInitHighlights* UInitHighlights::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.InitHighlights");
    return (UInitHighlights*)res;
}
UInitHighlights* UInitHighlights::InitHighlights(UObject* WorldContextObject, FString InGameName, bool Video, bool Screenshots) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.InitHighlights.InitHighlights"));
    struct Params_InitHighlights {
        UObject* WorldContextObject; // 0x0
        FString InGameName; // 0x8
        bool Video; // 0x18
        bool Screenshots; // 0x19
        char pad_1a[0x6];
        UInitHighlights* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_InitHighlights params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InGameName = (FString)InGameName;
    params.Video = (bool)Video;
    params.Screenshots = (bool)Screenshots;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInitHighlights*)params.ReturnValue;
}
