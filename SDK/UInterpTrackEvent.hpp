#pragma once
#include <cstdint>
#include "FEventTrackKey.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackEvent : public UInterpTrack {
public:
    TArray<FEventTrackKey> EventTrack; // 0x70
    uint8_t bFireEventsWhenForwards : 1; // 0x80
    uint8_t bFireEventsWhenBackwards : 1; // 0x80
    uint8_t bFireEventsWhenJumpingForwards : 1; // 0x80
    uint8_t bUseCustomEventName : 1; // 0x80
    uint8_t pad_bitfield_80_4 : 4;
    char pad_81[0x7];
    static UInterpTrackEvent* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
