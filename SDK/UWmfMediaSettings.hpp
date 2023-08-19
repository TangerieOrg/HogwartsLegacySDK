#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UWmfMediaSettings : public UObject {
public:
    bool AllowNonStandardCodecs; // 0x28
    bool LowLatency; // 0x29
    bool NativeAudioOut; // 0x2a
    bool HardwareAcceleratedVideoDecoding; // 0x2b
    char pad_2c[0x4];
    static UWmfMediaSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
