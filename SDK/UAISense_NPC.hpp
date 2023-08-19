#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_NPC : public UAISense {
public:
    static UAISense_NPC* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
