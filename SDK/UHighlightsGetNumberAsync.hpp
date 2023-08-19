#pragma once
#include <cstdint>
#include "EGfeSDKHighlightSignificance.hpp"
#include "EGfeSDKHighlightType.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x40];
    static UHighlightsGetNumberAsync* StaticClass();
    static UHighlightsGetNumberAsync* HighlightsGetNumberOfHighlights(UObject* WorldContextObject, FString GroupId, EGfeSDKHighlightType& TagFilter, EGfeSDKHighlightSignificance& SignificanceFilter);
}; // Size: 0x70
#pragma pack(pop)
