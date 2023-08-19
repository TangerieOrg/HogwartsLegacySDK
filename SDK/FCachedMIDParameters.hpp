#pragma once
#include <cstdint>
#include "FCachedMIDParameterScalar.hpp"
#include "FCachedMIDParameterVector.hpp"
#pragma pack(push, 1)
struct FCachedMIDParameters {
    TArray<FCachedMIDParameterScalar> Scalars; // 0x0
    TArray<FCachedMIDParameterVector> Vectors; // 0x10
}; // Size: 0x20
#pragma pack(pop)
