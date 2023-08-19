#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVanishmentEventType : uint8_t {
    Instant = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    TopToBottom = 3,
    HorizontallyOutward = 4,
    EVanishmentEventType_MAX = 5,
};
#pragma pack(pop)
