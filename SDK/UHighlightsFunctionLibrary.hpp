#pragma once
#include <cstdint>
#include "EGfeSDKPermission.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FGfeSDKCreateResponse;
#pragma pack(push, 1)
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UHighlightsFunctionLibrary* StaticClass();
    static void Poll();
    static void ChekIfHighlightsAvailable(FGfeSDKCreateResponse& InitProperties, bool& VideoGranted, bool& ScreenshotsGranted, EGfeSDKPermission& Video, EGfeSDKPermission& Screenshots);
}; // Size: 0x28
#pragma pack(pop)
