#pragma once
#include <cstdint>
#include "FStencilManagerEffectName.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblGameRenderStencil : public UAblAbilityTask {
public:
    FStencilManagerEffectName StencilEffect; // 0x70
    bool resetStencilOnExit; // 0x78
    char pad_79[0x7];
    static UAblGameRenderStencil* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
