#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParamColor.hpp"
#include "FWorldFXCascadeSystemParamMaterial.hpp"
#include "FWorldFXCascadeSystemParamScalar.hpp"
#include "FWorldFXCascadeSystemParamScalarRand.hpp"
#include "FWorldFXCascadeSystemParamVector.hpp"
#include "FWorldFXCascadeSystemParamVectorRand.hpp"
#include "FWorldFXCascadeSystemParamVectorUnitRand.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParams {
    TArray<FWorldFXCascadeSystemParamScalar> Scalars; // 0x0
    TArray<FWorldFXCascadeSystemParamScalarRand> ScalarRands; // 0x10
    TArray<FWorldFXCascadeSystemParamVector> Vectors; // 0x20
    TArray<FWorldFXCascadeSystemParamVectorRand> VectorRands; // 0x30
    TArray<FWorldFXCascadeSystemParamVectorUnitRand> VectorUnitRands; // 0x40
    TArray<FWorldFXCascadeSystemParamColor> Colors; // 0x50
    TArray<FWorldFXCascadeSystemParamMaterial> Materials; // 0x60
}; // Size: 0x70
#pragma pack(pop)
