#pragma once
#include <cstdint>
#include "ADefaultPawn.hpp"
#pragma pack(push, 1)
class ASpectatorPawn : public ADefaultPawn {
public:
    static ASpectatorPawn* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
