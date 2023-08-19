#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorHasComponent : public UStencilManagerMatchActor {
public:
    char pad_28[0x28];
    static UStencilManagerMatchActorHasComponent* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
