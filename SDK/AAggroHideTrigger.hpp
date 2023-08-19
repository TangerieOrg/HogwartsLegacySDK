#pragma once
#include <cstdint>
#include "AHideTrigger.hpp"
#pragma pack(push, 1)
class AAggroHideTrigger : public AHideTrigger {
public:
    char pad_400[0xa0];
    static AAggroHideTrigger* StaticClass();
}; // Size: 0x4a0
#pragma pack(pop)
