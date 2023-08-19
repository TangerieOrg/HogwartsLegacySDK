#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x48];
    static UHighlightsSetScreenshotAsync* StaticClass();
    static UHighlightsSetScreenshotAsync* HighlightsSetScreenshot(UObject* WorldContextObject, FString GroupId, FString HighlightId);
}; // Size: 0x78
#pragma pack(pop)
