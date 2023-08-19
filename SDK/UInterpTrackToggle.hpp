#pragma once
#include <cstdint>
#include "FToggleTrackKey.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackToggle : public UInterpTrack {
public:
    TArray<FToggleTrackKey> ToggleTrack; // 0x70
    uint8_t bActivateSystemEachUpdate : 1; // 0x80
    uint8_t bActivateWithJustAttachedFlag : 1; // 0x80
    uint8_t bFireEventsWhenForwards : 1; // 0x80
    uint8_t bFireEventsWhenBackwards : 1; // 0x80
    uint8_t bFireEventsWhenJumpingForwards : 1; // 0x80
    uint8_t pad_bitfield_80_5 : 3;
    char pad_81[0x7];
    static UInterpTrackToggle* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
