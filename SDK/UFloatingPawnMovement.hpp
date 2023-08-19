#pragma once
#include <cstdint>
#include "UPawnMovementComponent.hpp"
#pragma pack(push, 1)
class UFloatingPawnMovement : public UPawnMovementComponent {
public:
    float MaxSpeed; // 0x150
    float Acceleration; // 0x154
    float Deceleration; // 0x158
    float TurningBoost; // 0x15c
    uint8_t bPositionCorrected : 1; // 0x160
    uint8_t pad_bitfield_160_1 : 7;
    char pad_161[0x7];
    static UFloatingPawnMovement* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
