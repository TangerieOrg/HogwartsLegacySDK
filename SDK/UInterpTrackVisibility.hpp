#pragma once
#include <cstdint>
#include "FVisibilityTrackKey.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackVisibility : public UInterpTrack {
public:
    TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
    uint8_t bFireEventsWhenForwards : 1; // 0x80
    uint8_t bFireEventsWhenBackwards : 1; // 0x80
    uint8_t bFireEventsWhenJumpingForwards : 1; // 0x80
    uint8_t pad_bitfield_80_3 : 5;
    char pad_81[0x7];
    static UInterpTrackVisibility* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
