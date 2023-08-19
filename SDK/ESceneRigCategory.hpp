#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigCategory : int8_t {
    None = 0,
    Cinematic = 1,
    Conversation = 2,
    ConversationAmbient = 3,
    Station = 4,
    GhostStory = 5,
    Weather = 6,
    Vignette = 7,
    DialogueOnly = 8,
    Mission = 9,
    WowMoment = 10,
    PIM = 11,
    ESceneRigCategory_MAX = 12,
};
#pragma pack(pop)
