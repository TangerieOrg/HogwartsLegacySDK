#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FSessionServicePong {
    bool Authorized; // 0x0
    char pad_1[0x7];
    FString BuildDate; // 0x8
    FString DeviceName; // 0x18
    FGuid InstanceId; // 0x28
    FString InstanceName; // 0x38
    FString PlatformName; // 0x48
    FGuid SessionId; // 0x58
    FString SessionName; // 0x68
    FString SessionOwner; // 0x78
    bool Standalone; // 0x88
    char pad_89[0x7];
}; // Size: 0x90
#pragma pack(pop)
