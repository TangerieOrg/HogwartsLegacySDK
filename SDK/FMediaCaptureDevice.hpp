#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMediaCaptureDevice {
    char pad_0[0x18];
    FString URL; // 0x18
}; // Size: 0x28
#pragma pack(pop)
