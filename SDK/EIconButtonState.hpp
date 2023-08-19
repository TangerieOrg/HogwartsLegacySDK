#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EIconButtonState : uint8_t {
    BS_Enabled = 0,
    BS_Disabled = 1,
    BS_Missing = 2,
    BS_NonExistant = 3,
    BS_MAX = 4,
};
#pragma pack(pop)
