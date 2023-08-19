#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UNPCDistance_SpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float MinDist; // 0x28
    float MaxDist; // 0x2c
    static UNPCDistance_SpeedChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
