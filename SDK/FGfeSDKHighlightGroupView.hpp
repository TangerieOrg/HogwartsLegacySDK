#pragma once
#include <cstdint>
#include "EGfeSDKHighlightSignificance.hpp"
#include "EGfeSDKHighlightType.hpp"
#pragma pack(push, 1)
struct FGfeSDKHighlightGroupView {
    FString GroupId; // 0x0
    EGfeSDKHighlightType TagsFilter; // 0x10
    EGfeSDKHighlightSignificance SignificanceFilter; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
