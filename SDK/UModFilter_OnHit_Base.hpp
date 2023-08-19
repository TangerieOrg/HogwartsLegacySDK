#pragma once
#include <cstdint>
#include "UModFilter.hpp"
#pragma pack(push, 1)
class UModFilter_OnHit_Base : public UModFilter {
public:
    static UModFilter_OnHit_Base* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
