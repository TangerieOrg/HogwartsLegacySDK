#pragma once
#include <cstdint>
#include "FGfeSDKHighlightDefinition.hpp"
#pragma pack(push, 1)
struct FGfeSDKHighlightConfigParams {
    TArray<FGfeSDKHighlightDefinition> HighlightDefinitions; // 0x0
    FString DefaultLocale; // 0x10
}; // Size: 0x20
#pragma pack(pop)
