#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_Footprint : public UMultiFX2_Filtered {
public:
    char pad_68[0x50];
    static UMultiFX2_Footprint* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
