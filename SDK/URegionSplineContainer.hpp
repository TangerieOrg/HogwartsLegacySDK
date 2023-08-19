#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URegionSplineContainer : public UObject {
public:
    char pad_28[0x58];
    static URegionSplineContainer* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
