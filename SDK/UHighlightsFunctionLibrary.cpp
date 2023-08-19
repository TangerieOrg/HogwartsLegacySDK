#include "EGfeSDKPermission.hpp"
#include "FGfeSDKCreateResponse.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UHighlightsFunctionLibrary.hpp"
UHighlightsFunctionLibrary* UHighlightsFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.HighlightsFunctionLibrary");
    return (UHighlightsFunctionLibrary*)res;
}
void UHighlightsFunctionLibrary::Poll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll"));
    struct Params_Poll {
    }; // Size: 0x0
    Params_Poll params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHighlightsFunctionLibrary::ChekIfHighlightsAvailable(FGfeSDKCreateResponse& InitProperties, bool& VideoGranted, bool& ScreenshotsGranted, EGfeSDKPermission& Video, EGfeSDKPermission& Screenshots) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable"));
    struct Params_ChekIfHighlightsAvailable {
        FGfeSDKCreateResponse InitProperties; // 0x0
        bool VideoGranted; // 0x68
        bool ScreenshotsGranted; // 0x69
        EGfeSDKPermission Video; // 0x6a
        EGfeSDKPermission Screenshots; // 0x6b
    }; // Size: 0x6c
    Params_ChekIfHighlightsAvailable params{};
    params.InitProperties = (FGfeSDKCreateResponse)InitProperties;
    params.VideoGranted = (bool)VideoGranted;
    params.ScreenshotsGranted = (bool)ScreenshotsGranted;
    params.Video = (EGfeSDKPermission)Video;
    params.Screenshots = (EGfeSDKPermission)Screenshots;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InitProperties = params.InitProperties;
    ScreenshotsGranted = params.ScreenshotsGranted;
    VideoGranted = params.VideoGranted;
    Video = params.Video;
    Screenshots = params.Screenshots;
}
