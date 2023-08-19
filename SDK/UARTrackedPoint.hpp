#pragma once
#include <cstdint>
#include "UARTrackedGeometry.hpp"
#pragma pack(push, 1)
class UARTrackedPoint : public UARTrackedGeometry {
public:
    static UARTrackedPoint* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
