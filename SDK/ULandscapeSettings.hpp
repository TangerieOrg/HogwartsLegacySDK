#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class ULandscapeSettings : public UDeveloperSettings {
public:
    int32_t MaxNumberOfLayers; // 0x38
    char pad_3c[0x4];
    static ULandscapeSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
