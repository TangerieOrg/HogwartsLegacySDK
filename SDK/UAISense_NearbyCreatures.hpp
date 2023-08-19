#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_NearbyCreatures : public UAISense {
public:
    char pad_80[0x10];
    static UAISense_NearbyCreatures* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
