#pragma once
#include <cstdint>
#include "UAISense_Cognition.hpp"
#pragma pack(push, 1)
class UAISense_CogGroup : public UAISense_Cognition {
public:
    char pad_130[0x58];
    static UAISense_CogGroup* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
