#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class AActor;
class UObjectStateInfo;
class UAmbulatory_MovementComponent;
class UScheduledEntity;
#pragma pack(push, 1)
class UVelocityTrackerComponent : public UActorComponent {
public:
    char pad_c8[0x10];
    float ComponentLifetime; // 0xd8
    char pad_dc[0x4];
    AActor* Instigator; // 0xe0
    AActor* SendTargetActor; // 0xe8
    UObjectStateInfo* ObjectStateInfo; // 0xf0
    UAmbulatory_MovementComponent* MovementComponent; // 0xf8
    char pad_100[0xb0];
    static UVelocityTrackerComponent* StaticClass();
    void VelocityTrackerRemoved__DelegateSignature(AActor* Actor);
    void SetMaintainVelocity(FVector Velocity, float Time);
    void SetLastVelocity(FVector Vel);
    void SetInstigator(AActor* InInstigator);
    void SetComponentLifetime(float Seconds);
    void ResetComponentLifetime();
    void RemoveWhenStopped(bool Value);
    void OnFleshDestroyed(AActor* InActor, UScheduledEntity* InScheduledEntity);
    AActor* GetInstigator();
}; // Size: 0x1b0
#pragma pack(pop)
