#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_Stencil : public UMultiFX2_Filtered {
public:
    uint8_t StencilValue; // 0x68
    char pad_69[0x7];
    static UMultiFX2_Stencil* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
