#pragma once
#include <cstdint>
#include "AEmitter.hpp"
#include "FTransform.hpp"
class UParticleSystem;
class APlayerCameraManager;
class UClass;
#pragma pack(push, 1)
class AEmitterCameraLensEffectBase : public AEmitter {
public:
    UParticleSystem* PS_CameraEffect; // 0x298
    UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x2a0
    APlayerCameraManager* BaseCamera; // 0x2a8
    FTransform RelativeTransform; // 0x2b0
    float BaseFOV; // 0x2e0
    uint8_t bAllowMultipleInstances : 1; // 0x2e4
    uint8_t bResetWhenRetriggered : 1; // 0x2e4
    uint8_t pad_bitfield_2e4_2 : 6;
    char pad_2e5[0x3];
    TArray<UClass*> EmittersToTreatAsSame; // 0x2e8
    float DistFromCamera; // 0x2f8
    char pad_2fc[0x4];
    static AEmitterCameraLensEffectBase* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
