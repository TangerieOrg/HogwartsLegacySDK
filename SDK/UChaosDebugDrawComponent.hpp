#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UChaosDebugDrawComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    static UChaosDebugDrawComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
