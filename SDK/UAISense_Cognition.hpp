#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Cognition : public UAISense {
public:
    char pad_80[0xb0];
    static UAISense_Cognition* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
