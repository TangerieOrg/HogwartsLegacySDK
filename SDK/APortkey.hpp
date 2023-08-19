#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FRotator.hpp"
class UParticleSystemComponent;
class UParticleSystem;
class ATargetPoint;
struct FVector;
class UBTService_AvaAITree;
#pragma pack(push, 1)
class APortkey : public AActor {
public:
    char pad_248[0x10];
    UParticleSystemComponent* ParticleSystemComponent; // 0x258
    AActor* ActorToTeleport; // 0x260
    UParticleSystem* ExitEmitter; // 0x268
    UParticleSystem* EntryEmitter; // 0x270
    UParticleSystem* BeaconEmitter; // 0x278
    bool UseBeaconEmitter; // 0x280
    char pad_281[0x7];
    ATargetPoint* TargetA; // 0x288
    ATargetPoint* TargetB; // 0x290
    FDbSingleColumnInfo FastTravelDestinationA; // 0x298
    FDbSingleColumnInfo FastTravelDestinationB; // 0x320
    bool AtA; // 0x3a8
    char pad_3a9[0x3];
    float EjectForce; // 0x3ac
    float EntryCamDelay; // 0x3b0
    float ExitCamDelay; // 0x3b4
    FRotator EnterCameraRotation; // 0x3b8
    FRotator ExitCameraRotation; // 0x3c4
    bool UseAdvancedExit; // 0x3d0
    bool OnGround; // 0x3d1
    char pad_3d2[0x2];
    float OptimalDistance; // 0x3d4
    char pad_3d8[0x18];
    static APortkey* StaticClass();
    void Transport();
    void Touch();
    void PlacePlayerOptimally();
    void Interact(UBTService_AvaAITree* AvaService);
    void Handle_TeleportStart();
    void Handle_TeleportEnd();
    void Handle_ActivateExitCamera();
    void Handle_ActivateEnterCamera();
    ATargetPoint* GetTarget();
    void FindNonBlockingCameraLocation(FVector& Target1, FVector& Target2, FVector& CameraLocation, float CameraDistance, float CameraHeight);
    void Drop();
    void ActivateExitCamera();
    void ActivateEnterCamera();
}; // Size: 0x3f0
#pragma pack(pop)
