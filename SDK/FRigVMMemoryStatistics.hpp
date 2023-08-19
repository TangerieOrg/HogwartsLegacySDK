#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigVMMemoryStatistics {
    uint32_t RegisterCount; // 0x0
    uint32_t DataBytes; // 0x4
    uint32_t TotalBytes; // 0x8
}; // Size: 0xc
#pragma pack(pop)
