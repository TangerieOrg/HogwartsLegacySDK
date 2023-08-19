#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGfeSDKHighlightVideoParams {
    FString GroupId; // 0x0
    FString HighlightId; // 0x10
    int32_t StartDelta; // 0x20
    int32_t EndDelta; // 0x24
}; // Size: 0x28
#pragma pack(pop)
