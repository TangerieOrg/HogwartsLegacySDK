#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIGameOverReason : uint8_t {
    GameOver_Death = 0,
    GameOver_Azkaban = 1,
    GameOver_MissionFailed = 2,
    GameOver_None = 3,
    GameOver_MAX = 4,
};
#pragma pack(pop)
