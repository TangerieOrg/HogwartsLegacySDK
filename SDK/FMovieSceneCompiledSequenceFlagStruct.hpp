#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieSceneCompiledSequenceFlagStruct {
    uint8_t bParentSequenceRequiresLowerFence : 1; // 0x0
    uint8_t bParentSequenceRequiresUpperFence : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
}; // Size: 0x1
#pragma pack(pop)
