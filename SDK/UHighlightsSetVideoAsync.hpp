#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x50];
    static UHighlightsSetVideoAsync* StaticClass();
    static UHighlightsSetVideoAsync* HighlightsSetVideo(UObject* WorldContextObject, FString GroupId, FString HighlightId, int32_t& StartDelta, int32_t& EndDelta);
}; // Size: 0x80
#pragma pack(pop)
