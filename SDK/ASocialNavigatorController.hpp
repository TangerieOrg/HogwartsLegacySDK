#pragma once
#include <cstdint>
#include "ASocialTravelerController.hpp"
#pragma pack(push, 1)
class ASocialNavigatorController : public ASocialTravelerController {
public:
    char pad_4d8[0x30];
    static ASocialNavigatorController* StaticClass();
}; // Size: 0x508
#pragma pack(pop)
