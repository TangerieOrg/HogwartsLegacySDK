#pragma once
#include <cstdint>
#include "UChaosEventListenerComponent.hpp"
#pragma pack(push, 1)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
public:
    char pad_d0[0x210];
    static UChaosGameplayEventDispatcher* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
