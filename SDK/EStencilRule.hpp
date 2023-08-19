#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilRule : uint8_t {
    DoNotStencil = 0,
    OnlyStencil = 1,
    EStencilRule_MAX = 2,
};
#pragma pack(pop)
