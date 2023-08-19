#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPauseMenuPage : uint8_t {
    PAGE_INVENTORY = 0,
    PAGE_CHARACTER = 1,
    PAGE_TALENTS = 2,
    PAGE_QUESTS = 3,
    PAGE_MAP = 4,
    PAGE_MAIL = 5,
    PAGE_COLLECTIONS = 6,
    PAGE_CHALLENGES = 7,
    PAGE_SETTINGS = 8,
    PAGE_MAX = 9,
};
#pragma pack(pop)
