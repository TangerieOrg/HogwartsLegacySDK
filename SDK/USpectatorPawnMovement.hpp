#pragma once
#include <cstdint>
#include "UFloatingPawnMovement.hpp"
#pragma pack(push, 1)
class USpectatorPawnMovement : public UFloatingPawnMovement {
public:
    uint8_t bIgnoreTimeDilation : 1; // 0x168
    uint8_t pad_bitfield_168_1 : 7;
    char pad_169[0x7];
    static USpectatorPawnMovement* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
