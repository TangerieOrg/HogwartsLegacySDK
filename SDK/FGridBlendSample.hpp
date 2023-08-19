#pragma once
#include <cstdint>
#include "FEditorElement.hpp"
#pragma pack(push, 1)
struct FGridBlendSample {
    FEditorElement GridElement; // 0x0
    float BlendWeight; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
