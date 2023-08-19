#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorHasChildClass : public UStencilManagerMatchActor {
public:
    char pad_28[0x28];
    bool bAllowSubclasses; // 0x50
    char pad_51[0x7];
    static UStencilManagerMatchActorHasChildClass* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
