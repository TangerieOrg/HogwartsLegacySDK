#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXDelegateEvent : uint8_t {
    Event_Start = 0,
    Event_Restart = 1,
    Event_Finish = 2,
    Envelope_StartAttack = 3,
    Envelope_FirstEnterSustain = 4,
    Envelope_LoopSustain = 5,
    Envelope_BeginRelease = 6,
    Envelope_EndRelease = 7,
    EndCalled_Immediately = 8,
    EndCalled_JumpToRelease = 9,
    EndCalled_EndSustainHold = 10,
    ESkinFXDelegateEvent_MAX = 11,
};
#pragma pack(pop)
