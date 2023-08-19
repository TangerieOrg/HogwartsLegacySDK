#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGraphicsAdapterDesc {
    FString Name; // 0x0
    int32_t LUIDLow; // 0x10
    int32_t LUIDHigh; // 0x14
}; // Size: 0x18
#pragma pack(pop)
