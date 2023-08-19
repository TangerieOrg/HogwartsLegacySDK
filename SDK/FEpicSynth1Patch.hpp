#pragma once
#include <cstdint>
#include "ESynth1PatchSource.hpp"
#include "FSynth1PatchCable.hpp"
#pragma pack(push, 1)
struct FEpicSynth1Patch {
    ESynth1PatchSource PatchSource; // 0x0
    char pad_1[0x7];
    TArray<FSynth1PatchCable> PatchCables; // 0x8
}; // Size: 0x18
#pragma pack(pop)
