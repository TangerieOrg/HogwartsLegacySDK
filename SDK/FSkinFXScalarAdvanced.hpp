#pragma once
#include <cstdint>
#include "FSkinFXApplyFunctionMod.hpp"
#pragma pack(push, 1)
struct FSkinFXScalarAdvanced {
    FSkinFXApplyFunctionMod FunctionMod; // 0x0
    bool bPreviewOnly; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
