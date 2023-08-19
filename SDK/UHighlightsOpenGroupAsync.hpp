#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
struct FGfeSDKHighlightOpenGroupParams;
#pragma pack(push, 1)
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x88];
    static UHighlightsOpenGroupAsync* StaticClass();
    static UHighlightsOpenGroupAsync* HighlightsOpenGroup(UObject* WorldContextObject, FGfeSDKHighlightOpenGroupParams& Params);
}; // Size: 0xb8
#pragma pack(pop)
