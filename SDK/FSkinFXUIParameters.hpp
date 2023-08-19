#pragma once
#include <cstdint>
#include "FSkinFXUIScalarParameter.hpp"
#include "FSkinFXUIVectorParameter.hpp"
#pragma pack(push, 1)
struct FSkinFXUIParameters {
    TArray<FSkinFXUIScalarParameter> Scalars; // 0x0
    TArray<FSkinFXUIVectorParameter> Vectors; // 0x10
}; // Size: 0x20
#pragma pack(pop)
