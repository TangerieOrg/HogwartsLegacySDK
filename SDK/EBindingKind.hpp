#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBindingKind : uint8_t {
    Function = 0,
    Property = 1,
    EBindingKind_MAX = 2,
};
#pragma pack(pop)
