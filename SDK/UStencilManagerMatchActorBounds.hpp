#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorBounds : public UStencilManagerMatchActor {
public:
    float Radius; // 0x28
    bool bIncludeChildActors; // 0x2c
    char pad_2d[0x3];
    static UStencilManagerMatchActorBounds* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
