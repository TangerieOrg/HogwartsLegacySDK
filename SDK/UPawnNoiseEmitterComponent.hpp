#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UPawnNoiseEmitterComponent : public UActorComponent {
public:
    uint8_t bAIPerceptionSystemCompatibilityMode : 1; // 0xc8
    uint8_t pad_bitfield_c8_1 : 7;
    char pad_c9[0x3];
    FVector LastRemoteNoisePosition; // 0xcc
    float NoiseLifetime; // 0xd8
    float LastRemoteNoiseVolume; // 0xdc
    float LastRemoteNoiseTime; // 0xe0
    float LastLocalNoiseVolume; // 0xe4
    float LastLocalNoiseTime; // 0xe8
    char pad_ec[0x4];
    static UPawnNoiseEmitterComponent* StaticClass();
    void MakeNoise(AActor* NoiseMaker, float Loudness, FVector& NoiseLocation);
}; // Size: 0xf0
#pragma pack(pop)
