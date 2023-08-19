#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportMaterialQuality : uint8_t {
    UseNoFresnelCurves = 0,
    UseSimplifierFresnelCurves = 1,
    UseRealFresnelCurves = 2,
    EDatasmithImportMaterialQuality_MAX = 3,
};
#pragma pack(pop)
