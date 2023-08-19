#pragma once
#include <cstdint>
#include "ECameraShakeAttenuation.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "FRotator.hpp"
#include "USceneComponent.hpp"
class UClass;
struct FVector;
#pragma pack(push, 1)
class UCameraShakeSourceComponent : public USceneComponent {
public:
    float OuterAttenuationRadius; // 0x220
    char pad_224[0x4];
    UClass* CameraShake; // 0x228
    bool bAutoStart; // 0x230
    char pad_231[0xf];
    static UCameraShakeSourceComponent* StaticClass();
    void StopAllCameraShakesOfType(UClass* InCameraShake, bool bImmediately);
    void StopAllCameraShakes(bool bImmediately);
    void StartCameraShake(UClass* InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void Start();
    float GetAttenuationFactor(FVector& Location);
}; // Size: 0x240
#pragma pack(pop)
