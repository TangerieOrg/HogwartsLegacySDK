#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkCommSystem : int32_t {
    Socket = 0,
    HTCS = 1,
    EAkCommSystem_MAX = 2,
};
#pragma pack(pop)
