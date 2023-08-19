#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapRefreshType : uint8_t {
    Unsupported = 0,
    Key = 1,
    MIDOnly = 2,
    EMaterialSwapRefreshType_MAX = 3,
};
#pragma pack(pop)
