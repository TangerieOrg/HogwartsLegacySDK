#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilTagRule {
    DoNotStencil = 0,
    StencilOnly = 1,
    ConditionalStencil = 2,
    ShowOnStencil = 3,
    HideOnStencil = 4,
    EStencilTagRule_MAX = 5,
};
#pragma pack(pop)
