#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameFriendlyLevelNameFormat : uint8_t {
    Game = 0,
    Raw = 1,
    GameAndRaw = 2,
    RawAndGame = 3,
    EGameFriendlyLevelNameFormat_MAX = 4,
};
#pragma pack(pop)
