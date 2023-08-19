#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UParticleSystem;
class UAkAudioEvent;
class UCurveFloat;
class UCurveVector;
class AActor;
class UStaticMeshComponent;
#pragma pack(push, 1)
class UObjectLevitateComponent : public UActorComponent {
public:
    float HoverForce; // 0xc8
    float TorqueScale; // 0xcc
    float HoverHeight; // 0xd0
    float LinearDamping; // 0xd4
    float AngularDamping; // 0xd8
    char pad_dc[0x4];
    UParticleSystem* DefaultLevitateVfx; // 0xe0
    UAkAudioEvent* DefaultLevitateSfx; // 0xe8
    bool bOverrideEffects; // 0xf0
    char pad_f1[0x7];
    UParticleSystem* LevitateVfx; // 0xf8
    UAkAudioEvent* LevitateSfx; // 0x100
    UCurveFloat* HoverTargetOffset; // 0x108
    UCurveVector* HoverTargetRotation; // 0x110
    AActor* Owner; // 0x118
    UStaticMeshComponent* LevitateMesh; // 0x120
    float SavedHoverHeight; // 0x128
    float SavedHoverForce; // 0x12c
    float SavedMass; // 0x130
    char pad_134[0x24];
    static UObjectLevitateComponent* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
