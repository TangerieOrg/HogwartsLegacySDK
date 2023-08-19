#pragma once
#include <cstdint>
class UInterpGroup;
class UInterpTrack;
#pragma pack(push, 1)
struct FInterpEdSelKey {
    UInterpGroup* Group; // 0x0
    UInterpTrack* Track; // 0x8
    int32_t KeyIndex; // 0x10
    float UnsnappedPosition; // 0x14
}; // Size: 0x18
#pragma pack(pop)
