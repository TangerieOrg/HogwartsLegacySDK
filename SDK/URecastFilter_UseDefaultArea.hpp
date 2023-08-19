#pragma once
#include <cstdint>
#include "UNavigationQueryFilter.hpp"
#pragma pack(push, 1)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter {
public:
    static URecastFilter_UseDefaultArea* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
