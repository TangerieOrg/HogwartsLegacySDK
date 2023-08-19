#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_MoveDataState : uint8_t {
    Normal = 0,
    Attack = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
