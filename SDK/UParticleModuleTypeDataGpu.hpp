#pragma once
#include <cstdint>
#include "FGPUSpriteEmitterInfo.hpp"
#include "FGPUSpriteResourceData.hpp"
#include "UParticleModuleTypeDataBase.hpp"
#pragma pack(push, 1)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase {
public:
    FGPUSpriteEmitterInfo EmitterInfo; // 0x30
    FGPUSpriteResourceData ResourceData; // 0x2b0
    float CameraMotionBlurAmount; // 0x410
    uint8_t bClearExistingParticlesOnInit : 1; // 0x414
    uint8_t pad_bitfield_414_1 : 7;
    char pad_415[0xb];
    static UParticleModuleTypeDataGpu* StaticClass();
}; // Size: 0x420
#pragma pack(pop)
