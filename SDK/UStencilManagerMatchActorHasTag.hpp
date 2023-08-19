#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorHasTag : public UStencilManagerMatchActor {
public:
    FName Tag; // 0x28
    bool bIncludeChildActors; // 0x30
    char pad_31[0x7];
    static UStencilManagerMatchActorHasTag* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
