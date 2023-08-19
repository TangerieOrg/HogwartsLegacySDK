#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithCADStitchingTechnique : uint8_t {
    StitchingNone = 0,
    StitchingHeal = 1,
    StitchingSew = 2,
    EDatasmithCADStitchingTechnique_MAX = 3,
};
#pragma pack(pop)
