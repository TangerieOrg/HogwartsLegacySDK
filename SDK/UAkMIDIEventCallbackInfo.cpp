#include "EAkMidiEventType.hpp"
#include "FAkMidiCc.hpp"
#include "FAkMidiChannelAftertouch.hpp"
#include "FAkMidiGeneric.hpp"
#include "FAkMidiNoteAftertouch.hpp"
#include "FAkMidiNoteOnOff.hpp"
#include "FAkMidiPitchBend.hpp"
#include "FAkMidiProgramChange.hpp"
#include "UAkEventCallbackInfo.hpp"
#include "UAkMIDIEventCallbackInfo.hpp"
#include "UFunction.hpp"
UAkMIDIEventCallbackInfo* UAkMIDIEventCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMIDIEventCallbackInfo");
    return (UAkMIDIEventCallbackInfo*)res;
}
bool UAkMIDIEventCallbackInfo::GetProgramChange(FAkMidiProgramChange& AsProgramChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange"));
    struct Params_GetProgramChange {
        FAkMidiProgramChange AsProgramChange; // 0x0
        bool ReturnValue; // 0x3
    }; // Size: 0x4
    Params_GetProgramChange params{};
    params.AsProgramChange = (FAkMidiProgramChange)AsProgramChange;
    ProcessEvent(func, &params);
    AsProgramChange = params.AsProgramChange;
    return (bool)params.ReturnValue;
}
EAkMidiEventType UAkMIDIEventCallbackInfo::GetType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType"));
    struct Params_GetType {
        EAkMidiEventType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetType params{};
    ProcessEvent(func, &params);
    return (EAkMidiEventType)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetPitchBend(FAkMidiPitchBend& AsPitchBend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend"));
    struct Params_GetPitchBend {
        FAkMidiPitchBend AsPitchBend; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPitchBend params{};
    params.AsPitchBend = (FAkMidiPitchBend)AsPitchBend;
    ProcessEvent(func, &params);
    AsPitchBend = params.AsPitchBend;
    return (bool)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetNoteOff(FAkMidiNoteOnOff& AsNoteOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff"));
    struct Params_GetNoteOff {
        FAkMidiNoteOnOff AsNoteOff; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetNoteOff params{};
    params.AsNoteOff = (FAkMidiNoteOnOff)AsNoteOff;
    ProcessEvent(func, &params);
    AsNoteOff = params.AsNoteOff;
    return (bool)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetNoteOn(FAkMidiNoteOnOff& AsNoteOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn"));
    struct Params_GetNoteOn {
        FAkMidiNoteOnOff AsNoteOn; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetNoteOn params{};
    params.AsNoteOn = (FAkMidiNoteOnOff)AsNoteOn;
    ProcessEvent(func, &params);
    AsNoteOn = params.AsNoteOn;
    return (bool)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch"));
    struct Params_GetNoteAftertouch {
        FAkMidiNoteAftertouch AsNoteAftertouch; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetNoteAftertouch params{};
    params.AsNoteAftertouch = (FAkMidiNoteAftertouch)AsNoteAftertouch;
    ProcessEvent(func, &params);
    AsNoteAftertouch = params.AsNoteAftertouch;
    return (bool)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetGeneric(FAkMidiGeneric& AsGeneric) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric"));
    struct Params_GetGeneric {
        FAkMidiGeneric AsGeneric; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetGeneric params{};
    params.AsGeneric = (FAkMidiGeneric)AsGeneric;
    ProcessEvent(func, &params);
    AsGeneric = params.AsGeneric;
    return (bool)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch"));
    struct Params_GetChannelAftertouch {
        FAkMidiChannelAftertouch AsChannelAftertouch; // 0x0
        bool ReturnValue; // 0x3
    }; // Size: 0x4
    Params_GetChannelAftertouch params{};
    params.AsChannelAftertouch = (FAkMidiChannelAftertouch)AsChannelAftertouch;
    ProcessEvent(func, &params);
    AsChannelAftertouch = params.AsChannelAftertouch;
    return (bool)params.ReturnValue;
}
uint8_t UAkMIDIEventCallbackInfo::GetChannel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel"));
    struct Params_GetChannel {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetChannel params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
bool UAkMIDIEventCallbackInfo::GetCc(FAkMidiCc& AsCc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc"));
    struct Params_GetCc {
        FAkMidiCc AsCc; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetCc params{};
    params.AsCc = (FAkMidiCc)AsCc;
    ProcessEvent(func, &params);
    AsCc = params.AsCc;
    return (bool)params.ReturnValue;
}
