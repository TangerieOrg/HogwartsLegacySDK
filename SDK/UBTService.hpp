#pragma once
#include <cstdint>
#include "UBTAuxiliaryNode.hpp"
#pragma pack(push, 1)
class UBTService : public UBTAuxiliaryNode {
public:
    float Interval; // 0x60
    float RandomDeviation; // 0x64
    uint8_t bCallTickOnSearchStart : 1; // 0x68
    uint8_t bRestartTimerOnEachActivation : 1; // 0x68
    uint8_t pad_bitfield_68_2 : 6;
    char pad_69[0x7];
    static UBTService* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
