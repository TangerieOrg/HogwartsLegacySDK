#pragma once
#include <cstdint>
#include "ASocialTravelerController.hpp"
#pragma pack(push, 1)
class ASocialSplineController : public ASocialTravelerController {
public:
    char pad_4d8[0x8];
    static ASocialSplineController* StaticClass();
}; // Size: 0x4e0
#pragma pack(pop)
