#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkMidiEventType : uint8_t {
    AkMidiEventTypeInvalid = 0,
    AkMidiEventTypeNoteOff = 128,
    AkMidiEventTypeNoteOn = 144,
    AkMidiEventTypeNoteAftertouch = 160,
    AkMidiEventTypeController = 176,
    AkMidiEventTypeProgramChange = 192,
    AkMidiEventTypeChannelAftertouch = 208,
    AkMidiEventTypePitchBend = 224,
    AkMidiEventTypeSysex = 240,
    AkMidiEventTypeEscape = 247,
    AkMidiEventTypeMeta = 255,
};
#pragma pack(pop)
