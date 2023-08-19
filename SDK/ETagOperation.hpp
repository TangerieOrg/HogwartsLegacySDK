#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETagOperation : uint8_t {
    Add = 0,
    Remove = 1,
    ETagOperation_MAX = 2,
};
#pragma pack(pop)
