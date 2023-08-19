#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
struct FGfeSDKHighlightConfigParams;
#pragma pack(push, 1)
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x48];
    static UHighlightsConfigureAsync* StaticClass();
    static UHighlightsConfigureAsync* HighlightsConfigure(UObject* WorldContextObject, FGfeSDKHighlightConfigParams& ConfigParams);
}; // Size: 0x78
#pragma pack(pop)
