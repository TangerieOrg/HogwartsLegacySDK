#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EKeyLayout : uint8_t {
    QWERTY = 0,
    QWERTZ = 1,
    AZERTY = 2,
    QWERTY_AZERTY = 3,
    EKeyLayout_MAX = 4,
};
#pragma pack(pop)
