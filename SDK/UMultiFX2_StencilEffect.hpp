#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_StencilEffect : public UMultiFX2_Filtered {
public:
    FName StencilEffect; // 0x68
    static UMultiFX2_StencilEffect* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
