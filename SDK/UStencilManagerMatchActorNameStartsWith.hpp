#pragma once
#include <cstdint>
#include "UStencilManagerMatchActorName.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorNameStartsWith : public UStencilManagerMatchActorName {
public:
    FName StartOfName; // 0x30
    static UStencilManagerMatchActorNameStartsWith* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
