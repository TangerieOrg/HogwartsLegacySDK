#pragma once
#include <cstdint>
#include "EAkMidiEventType.hpp"
#include "UAkEventCallbackInfo.hpp"
struct FAkMidiProgramChange;
struct FAkMidiChannelAftertouch;
struct FAkMidiPitchBend;
struct FAkMidiNoteOnOff;
struct FAkMidiNoteAftertouch;
struct FAkMidiGeneric;
struct FAkMidiCc;
#pragma pack(push, 1)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo {
public:
    char pad_38[0x10];
    static UAkMIDIEventCallbackInfo* StaticClass();
    EAkMidiEventType GetType();
    bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(FAkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);
    uint8_t GetChannel();
    bool GetCc(FAkMidiCc& AsCc);
}; // Size: 0x48
#pragma pack(pop)
