#pragma once
#include <cstdint>
#include "ETrackToggleAction.hpp"
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstToggle : public UInterpTrackInst {
public:
    ETrackToggleAction Action; // 0x28
    char pad_29[0x3];
    float LastUpdatePosition; // 0x2c
    uint8_t bSavedActiveState : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    static UInterpTrackInstToggle* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
