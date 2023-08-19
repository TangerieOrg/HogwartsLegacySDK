#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UWolf_CloseDistanceSpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float CloseDistance; // 0x28
    float MiddleDistance; // 0x2c
    float CloseSpeed; // 0x30
    float MiddleSpeed; // 0x34
    float FarSpeed; // 0x38
    float UpdateTime; // 0x3c
    static UWolf_CloseDistanceSpeedChoice* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
