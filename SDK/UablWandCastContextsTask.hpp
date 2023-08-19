#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablWandCastContextsTask : public UAblAbilityTask {
public:
    char pad_70[0x50];
    static UablWandCastContextsTask* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
