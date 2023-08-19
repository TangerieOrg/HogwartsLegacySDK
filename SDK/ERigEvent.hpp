#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigEvent : uint8_t {
    None = 0,
    RequestAutoKey = 1,
    Max = 2,
};
#pragma pack(pop)
