#pragma once
#include <cstdint>
#include "EBeam2Method.hpp"
#include "EBeamTaperMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleTypeDataBase.hpp"
#pragma pack(push, 1)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase {
public:
    EBeam2Method BeamMethod; // 0x30
    char pad_31[0x3];
    int32_t TextureTile; // 0x34
    float TextureTileDistance; // 0x38
    int32_t Sheets; // 0x3c
    int32_t MaxBeamCount; // 0x40
    float Speed; // 0x44
    int32_t InterpolationPoints; // 0x48
    uint8_t bAlwaysOn : 1; // 0x4c
    uint8_t pad_bitfield_4c_1 : 7;
    char pad_4d[0x3];
    int32_t UpVectorStepSize; // 0x50
    FName BranchParentName; // 0x54
    char pad_5c[0x4];
    FRawDistributionFloat Distance; // 0x60
    EBeamTaperMethod TaperMethod; // 0x90
    char pad_91[0x7];
    FRawDistributionFloat TaperFactor; // 0x98
    FRawDistributionFloat TaperScale; // 0xc8
    uint8_t RenderGeometry : 1; // 0xf8
    uint8_t RenderDirectLine : 1; // 0xf8
    uint8_t RenderLines : 1; // 0xf8
    uint8_t RenderTessellation : 1; // 0xf8
    uint8_t pad_bitfield_f8_4 : 4;
    char pad_f9[0x57];
    static UParticleModuleTypeDataBeam2* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
