#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilValueRenderCustomDepthRule : uint8_t {
    DoNotStencil = 0,
    OnlyStencil = 1,
    EStencilValueRenderCustomDepthRule_MAX = 2,
};
#pragma pack(pop)
