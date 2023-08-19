#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UChaosEventListenerComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    static UChaosEventListenerComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
