#pragma once
#include <cstdint>
class ULevelStreaming;
#pragma pack(push, 1)
struct FStreamingLevelsToConsider {
    TArray<ULevelStreaming*> StreamingLevels; // 0x0
    char pad_10[0x18];
}; // Size: 0x28
#pragma pack(pop)
