#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETutorialState {
    TS_Queued = 0,
    TS_Loading = 1,
    TS_Active = 2,
    TS_MAX = 3,
};
#pragma pack(pop)
