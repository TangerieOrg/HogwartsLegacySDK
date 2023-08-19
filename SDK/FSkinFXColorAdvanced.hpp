#pragma once
#include <cstdint>
#include "ESkinFXColorConvert.hpp"
#include "FSkinFXApplyFunctionModColor.hpp"
#pragma pack(push, 1)
struct FSkinFXColorAdvanced {
    FSkinFXApplyFunctionModColor FunctionMod; // 0x0
    ESkinFXColorConvert Convert; // 0x1c
    bool bPreviewOnly; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
