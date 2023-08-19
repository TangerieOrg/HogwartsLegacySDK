#pragma once
#include <cstdint>
#include "APlayerStart.hpp"
#pragma pack(push, 1)
class APlayerStartPIE : public APlayerStart {
public:
    static APlayerStartPIE* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
