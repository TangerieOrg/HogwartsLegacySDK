#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBossStates : uint8_t {
    BS_None = 0,
    BS_Phase1 = 1,
    BS_Phase2 = 2,
    BS_Phase3 = 3,
    BS_Defeated = 4,
    BS_Victory = 5,
    BS_Finished = 6,
    BS_MAX = 7,
};
#pragma pack(pop)
