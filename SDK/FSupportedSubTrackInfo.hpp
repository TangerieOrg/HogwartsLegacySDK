#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FSupportedSubTrackInfo {
    UClass* SupportedClass; // 0x0
    FString SubTrackName; // 0x8
    int32_t GroupIndex; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
