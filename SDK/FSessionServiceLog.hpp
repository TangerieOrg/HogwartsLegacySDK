#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FSessionServiceLog {
    FName Category; // 0x0
    FString Data; // 0x8
    FGuid InstanceId; // 0x18
    double TimeSeconds; // 0x28
    uint8_t Verbosity; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
