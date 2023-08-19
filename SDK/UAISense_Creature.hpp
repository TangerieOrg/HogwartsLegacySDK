#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Creature : public UAISense {
public:
    char pad_80[0x10];
    static UAISense_Creature* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
