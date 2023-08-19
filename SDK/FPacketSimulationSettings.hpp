#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPacketSimulationSettings {
    int32_t PktLoss; // 0x0
    int32_t PktLossMaxSize; // 0x4
    int32_t PktLossMinSize; // 0x8
    int32_t PktOrder; // 0xc
    int32_t PktDup; // 0x10
    int32_t PktLag; // 0x14
    int32_t PktLagVariance; // 0x18
    int32_t PktLagMin; // 0x1c
    int32_t PktLagMax; // 0x20
    int32_t PktIncomingLagMin; // 0x24
    int32_t PktIncomingLagMax; // 0x28
    int32_t PktIncomingLoss; // 0x2c
    int32_t PktJitter; // 0x30
}; // Size: 0x34
#pragma pack(pop)
