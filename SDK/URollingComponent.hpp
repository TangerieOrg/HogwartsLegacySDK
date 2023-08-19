#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UMultiFX2_Base;
class UStaticMeshComponent;
class UAkComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class URollingComponent : public UActorComponent {
public:
    TArray<UMultiFX2_Base*> RollingFX2; // 0xc8
    FName RTPCName; // 0xd8
    float RollingAudioCutoffVelocity; // 0xe0
    float AdditionalLineTraceDistance; // 0xe4
    float VelocityLerpValue; // 0xe8
    float InAirVelocityDecay; // 0xec
    char pad_f0[0x8];
    UStaticMeshComponent* StaticMeshComp; // 0xf8
    UAkComponent* AkComponent; // 0x100
    char pad_108[0x18];
    static URollingComponent* StaticClass();
    void OnComponentWake(UPrimitiveComponent* OverlappedComponent, FName BoneName);
    void OnComponentSleep(UPrimitiveComponent* OverlappedComponent, FName BoneName);
}; // Size: 0x120
#pragma pack(pop)
