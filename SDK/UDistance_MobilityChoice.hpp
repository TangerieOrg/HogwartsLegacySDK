#pragma once
#include <cstdint>
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class UDistance_MobilityChoice : public UNPC_MobilityChoice {
public:
    float AttackDistMin; // 0x28
    float AttackDistMax; // 0x2c
    float PressureDistMin; // 0x30
    float PressureDistMax; // 0x34
    float FarDistMin; // 0x38
    float FarDistMax; // 0x3c
    static UDistance_MobilityChoice* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
