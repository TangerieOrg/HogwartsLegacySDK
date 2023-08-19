#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorAND : public UStencilManagerMatchActor {
public:
    TArray<UStencilManagerMatchActor*> Expressions; // 0x28
    static UStencilManagerMatchActorAND* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
