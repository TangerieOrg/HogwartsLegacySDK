#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENpcMoveDirectionType : uint8_t {
    Global = 0,
    Local = 1,
    ENpcMoveDirectionType_MAX = 2,
};
#pragma pack(pop)
