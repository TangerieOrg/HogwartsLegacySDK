#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
struct FGfeSDKHighlightSummaryParams;
#pragma pack(push, 1)
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x38];
    static UHighlightsSummaryAsync* StaticClass();
    static UHighlightsSummaryAsync* HighlightsOpenSummary(UObject* WorldContextObject, FGfeSDKHighlightSummaryParams& Params);
}; // Size: 0x68
#pragma pack(pop)
