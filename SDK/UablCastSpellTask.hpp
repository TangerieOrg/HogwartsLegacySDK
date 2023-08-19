#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablCastSpellTask : public UAblAbilityTask {
public:
    FName Socket; // 0x70
    static UablCastSpellTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
