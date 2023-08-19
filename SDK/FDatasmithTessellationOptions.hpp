#pragma once
#include <cstdint>
#include "EDatasmithCADStitchingTechnique.hpp"
#pragma pack(push, 1)
struct FDatasmithTessellationOptions {
    float ChordTolerance; // 0x0
    float MaxEdgeLength; // 0x4
    float NormalTolerance; // 0x8
    EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
