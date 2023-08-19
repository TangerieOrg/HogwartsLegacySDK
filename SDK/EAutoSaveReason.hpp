#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAutoSaveReason : uint8_t {
    AUTO_SAVE_UNKNOWN = 0,
    AUTO_SAVE_MISSION = 1,
    AUTO_SAVE_TIMER = 2,
    AUTO_SAVE_ALWAYS = 3,
    AUTO_SAVE_GAME_MODE_START_PLAY = 4,
    AUTO_SAVE_INTRO = 5,
    AUTO_SAVE_BACKGROUNDED = 6,
    AUTO_SAVE_TEST = 7,
    AUTO_SAVE_MAX = 8,
};
#pragma pack(pop)
