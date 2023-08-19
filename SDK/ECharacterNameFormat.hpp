#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECharacterNameFormat : uint8_t {
    NONE = 0,
    ANSI = 1,
    WIDE = 2,
    ECharacterNameFormat_MAX = 3,
};
#pragma pack(pop)
