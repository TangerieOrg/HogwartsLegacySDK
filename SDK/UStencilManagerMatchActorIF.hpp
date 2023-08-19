#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorIF : public UStencilManagerMatchActor {
public:
    UStencilManagerMatchActor* Expression; // 0x28
    UStencilManagerMatchActor* ExpressionTrue; // 0x30
    UStencilManagerMatchActor* ExpressionFalse; // 0x38
    static UStencilManagerMatchActorIF* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
