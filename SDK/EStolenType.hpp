#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStolenType : uint8_t {
    STOLEN_TYPE_DONT_CARE = 0,
    STOLEN_TYPE_STOLEN = 1,
    STOLEN_TYPE_NOT_STOLEN = 2,
    STOLEN_TYPE_MAX = 3,
};
#pragma pack(pop)
