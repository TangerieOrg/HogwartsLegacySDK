#pragma once
#include <cstdint>
#include "UAISense_CogGroup.hpp"
#pragma pack(push, 1)
class UAISense_CogGroup_Interact : public UAISense_CogGroup {
public:
    char pad_188[0x18];
    static UAISense_CogGroup_Interact* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
