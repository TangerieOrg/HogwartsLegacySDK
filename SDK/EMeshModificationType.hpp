#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshModificationType : uint8_t {
    FirstInterim = 0,
    Interim = 1,
    Final = 2,
    EMeshModificationType_MAX = 3,
};
#pragma pack(pop)
