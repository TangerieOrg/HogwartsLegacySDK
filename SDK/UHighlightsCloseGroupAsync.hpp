#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x40];
    static UHighlightsCloseGroupAsync* StaticClass();
    static UHighlightsCloseGroupAsync* HighlightsCloseGroup(UObject* WorldContextObject, FString GroupId, bool& DestroyHighlights);
}; // Size: 0x70
#pragma pack(pop)
