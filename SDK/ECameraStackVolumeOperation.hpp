#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackVolumeOperation : uint8_t {
    AddOnTop = 0,
    InsertBefore = 1,
    InsertAfter = 2,
    Replace = 3,
    ECameraStackVolumeOperation_MAX = 4,
};
#pragma pack(pop)
