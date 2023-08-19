#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNamedEventTask : public UAblAbilityTask {
public:
    FName Event; // 0x70
    static UablNamedEventTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
