#pragma once
#include <cstdint>
#include "EAttenuationDistanceModel.hpp"
#include "EAttenuationShape\Type.hpp"
#include "ENaturalSoundFalloffMode.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBaseAttenuationSettings {
    char pad_0[0x8];
    EAttenuationDistanceModel DistanceAlgorithm; // 0x8
    EAttenuationShape::Type AttenuationShape; // 0x9
    char pad_a[0x2];
    float dBAttenuationAtMax; // 0xc
    ENaturalSoundFalloffMode FalloffMode; // 0x10
    char pad_11[0x3];
    FVector AttenuationShapeExtents; // 0x14
    float ConeOffset; // 0x20
    float FalloffDistance; // 0x24
    FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
}; // Size: 0xb0
#pragma pack(pop)
