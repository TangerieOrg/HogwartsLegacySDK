#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FXRDeviceId {
    FName SystemName; // 0x0
    int32_t DeviceID; // 0x8
}; // Size: 0xc
#pragma pack(pop)
