#pragma once
#include <cstdint>
#include "FCreatureParticleSurfaceList.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UCreature_FootstepDataAsset : public UObject {
public:
    char pad_28[0x50];
    FName DefaultAudioSwitchState; // 0x78
    FCreatureParticleSurfaceList DefaultParticleSurfaceSystems; // 0x80
    float AudioMaxDistanceToCamera; // 0x110
    char pad_114[0x4];
    UAkAudioEvent* AudioEvent; // 0x118
    FName AudioSwitchGroup; // 0x120
    float AudioImpactStrengthArray[3]; // 0x128
    char pad_134[0x4];
    UAkAudioEvent* MotionEvent; // 0x138
    UAkAudioEvent* PlayerMountedMotionEvent; // 0x140
    int32_t ParticlesMaxLOD; // 0x148
    float ParticlesMaxDistanceToCamera; // 0x14c
    float DecalScale; // 0x150
    FVector DecalOffset; // 0x154
    float EffectScale; // 0x160
    char pad_164[0xa4];
    static UCreature_FootstepDataAsset* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
