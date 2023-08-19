#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorName : public UStencilManagerMatchActor {
public:
    bool bIgnoreCase; // 0x28
    char pad_29[0x7];
    static UStencilManagerMatchActorName* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
