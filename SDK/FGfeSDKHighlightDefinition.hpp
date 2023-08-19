#pragma once
#include <cstdint>
#include "EGfeSDKHighlightSignificance.hpp"
#include "EGfeSDKHighlightType.hpp"
#pragma pack(push, 1)
struct FGfeSDKHighlightDefinition {
    FString ID; // 0x0
    bool UserDefaultInterest; // 0x10
    EGfeSDKHighlightType HighlightTags; // 0x11
    EGfeSDKHighlightSignificance Significance; // 0x12
    char pad_13[0x55];
}; // Size: 0x68
#pragma pack(pop)
