#pragma once
#include <cstdint>
#include "FSelectableName.hpp"
#include "UModFilter_ItemProperty_Base.hpp"
#pragma pack(push, 1)
class UModFilter_ItemProperty_Custom : public UModFilter_ItemProperty_Base {
public:
    FSelectableName ItemType; // 0x30
    static UModFilter_ItemProperty_Custom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
