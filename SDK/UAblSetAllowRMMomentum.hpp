#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetAllowRMMomentum : public UAblAbilityTask {
public:
    bool RemoveRMMomentumAtEndOfTask; // 0x70
    bool AddRMMomentum; // 0x71
    bool RemoveRMMomentum; // 0x72
    char pad_73[0x5];
    static UAblSetAllowRMMomentum* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
