#pragma once
#include <cstdint>
#include "UParticleModuleTypeDataBase.hpp"
#pragma pack(push, 1)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase {
public:
    uint8_t bDeadTrailsOnDeactivate : 1; // 0x30
    uint8_t bEnablePreviousTangentRecalculation : 1; // 0x30
    uint8_t bTangentRecalculationEveryFrame : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x3];
    float TilingDistance; // 0x34
    float DistanceTessellationStepSize; // 0x38
    float TangentTessellationStepSize; // 0x3c
    float WidthTessellationStepSize; // 0x40
    char pad_44[0x4];
    static UParticleModuleTypeDataAnimTrail* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
