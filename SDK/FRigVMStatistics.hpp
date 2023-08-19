#pragma once
#include <cstdint>
#include "FRigVMByteCodeStatistics.hpp"
#include "FRigVMMemoryStatistics.hpp"
#pragma pack(push, 1)
struct FRigVMStatistics {
    uint32_t BytesForCDO; // 0x0
    uint32_t BytesPerInstance; // 0x4
    FRigVMMemoryStatistics LiteralMemory; // 0x8
    FRigVMMemoryStatistics WorkMemory; // 0x14
    uint32_t BytesForCaching; // 0x20
    FRigVMByteCodeStatistics ByteCode; // 0x24
}; // Size: 0x2c
#pragma pack(pop)
