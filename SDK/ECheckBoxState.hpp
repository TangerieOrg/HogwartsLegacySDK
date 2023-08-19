#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECheckBoxState : uint8_t {
    Unchecked = 0,
    Checked = 1,
    Undetermined = 2,
    ECheckBoxState_MAX = 3,
};
#pragma pack(pop)
