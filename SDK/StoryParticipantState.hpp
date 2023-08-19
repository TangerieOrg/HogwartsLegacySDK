#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum StoryParticipantState {
    PARTICIPANT_ADDED = 0,
    PARTICIPANT_ARRIVED = 1,
    PARTICIPANT_ENTERED = 2,
    PARTICIPANT_EXITING = 3,
    PARTICIPANT_KICKED = 4,
    PARTICIPANT_EXITED = 5,
    PARTICIPANT_MAX = 6,
};
#pragma pack(pop)
