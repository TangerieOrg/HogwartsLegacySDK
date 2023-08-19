#pragma once
#include <cstdint>
#include "UARTrackedImage.hpp"
#pragma pack(push, 1)
class UARTrackedQRCode : public UARTrackedImage {
public:
    char pad_110[0x8];
    int32_t Version; // 0x118
    char pad_11c[0x4];
    static UARTrackedQRCode* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
