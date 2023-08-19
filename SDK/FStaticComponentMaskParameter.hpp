#pragma once
#include <cstdint>
#include "FStaticParameterBase.hpp"
#pragma pack(push, 1)
struct FStaticComponentMaskParameter : public FStaticParameterBase {
    bool R; // 0x24
    bool G; // 0x25
    bool B; // 0x26
    bool A; // 0x27
}; // Size: 0x28
#pragma pack(pop)
