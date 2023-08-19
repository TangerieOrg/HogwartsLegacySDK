#pragma once
#include <cstdint>
#include "ASocialAIController.hpp"
#pragma pack(push, 1)
class ASocialTravelerController : public ASocialAIController {
public:
    char pad_458[0x80];
    static ASocialTravelerController* StaticClass();
}; // Size: 0x4d8
#pragma pack(pop)
