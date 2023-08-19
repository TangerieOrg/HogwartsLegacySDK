#pragma once
#include <cstdint>
#include "EVisibilityTrackAction.hpp"
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstVisibility : public UInterpTrackInst {
public:
    EVisibilityTrackAction Action; // 0x28
    char pad_29[0x3];
    float LastUpdatePosition; // 0x2c
    static UInterpTrackInstVisibility* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
