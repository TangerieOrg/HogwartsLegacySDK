#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAIParamType : uint8_t {
    Float = 0,
    Int = 1,
    Bool = 2,
    MAX = 3,
};
#pragma pack(pop)
