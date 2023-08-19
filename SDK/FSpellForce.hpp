#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSpellForce {
    FVector m_forceVector; // 0x0
    FVector m_appliedLocation; // 0xc
}; // Size: 0x18
#pragma pack(pop)
