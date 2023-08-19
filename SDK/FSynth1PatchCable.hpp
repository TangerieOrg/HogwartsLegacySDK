#pragma once
#include <cstdint>
#include "ESynth1PatchDestination.hpp"
#pragma pack(push, 1)
struct FSynth1PatchCable {
    float Depth; // 0x0
    ESynth1PatchDestination Destination; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
