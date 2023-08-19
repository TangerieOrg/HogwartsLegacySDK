#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Smell : public UAISense {
public:
    static UAISense_Smell* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
