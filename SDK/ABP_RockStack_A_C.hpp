#pragma once
#include <cstdint>
#include "ABP_Breakable_Fragile_C.hpp"
#include "FHitResult.hpp"
#pragma pack(push, 1)
class ABP_RockStack_A_C : public ABP_Breakable_Fragile_C {
public:
    char pad_358[0x88];
    static ABP_RockStack_A_C* StaticClass();
}; // Size: 0x3e0
#pragma pack(pop)
