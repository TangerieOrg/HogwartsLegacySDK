#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorNOT : public UStencilManagerMatchActor {
public:
    UStencilManagerMatchActor* Expression; // 0x28
    static UStencilManagerMatchActorNOT* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
