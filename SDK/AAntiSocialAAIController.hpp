#pragma once
#include <cstdint>
#include "ASocialAIController.hpp"
#pragma pack(push, 1)
class AAntiSocialAAIController : public ASocialAIController {
public:
    char pad_458[0xa0];
    static AAntiSocialAAIController* StaticClass();
}; // Size: 0x4f8
#pragma pack(pop)
