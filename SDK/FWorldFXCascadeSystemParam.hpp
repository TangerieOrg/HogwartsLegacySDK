#pragma once
#include <cstdint>
#include "EParticleSysParamType.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParam {
    FName Name; // 0x0
    EParticleSysParamType ParamType; // 0x8
    char pad_9[0x3];
    float Scalar; // 0xc
    float Scalar_Low; // 0x10
    FVector Vector; // 0x14
    FVector Vector_Low; // 0x20
    FColor Color; // 0x2c
    UMaterialInterface* Material; // 0x30
}; // Size: 0x38
#pragma pack(pop)
