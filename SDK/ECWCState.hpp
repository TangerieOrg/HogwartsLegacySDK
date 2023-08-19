#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECWCState {
    None = 0,
    CWCStart = 1,
    CWCUpdated = 2,
    ECWCState_MAX = 3,
};
#pragma pack(pop)
