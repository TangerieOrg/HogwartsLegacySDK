#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSunDiskState.hpp"
#pragma pack(push, 1)
struct FSunDiskComputedState {
    FSunDiskState State; // 0x0
    float Distance; // 0x1c
    float Size; // 0x20
    float BaseScale; // 0x24
    FLinearColor Color; // 0x28
    float Desaturation; // 0x38
    float Brightness; // 0x3c
    float HorizonZ; // 0x40
    float CoronaBrightnessFactor; // 0x44
    float CoronaAlphaFactor; // 0x48
}; // Size: 0x4c
#pragma pack(pop)
