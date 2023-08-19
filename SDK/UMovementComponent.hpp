#pragma once
#include <cstdint>
#include "EPlaneConstraintAxisSetting.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class USceneComponent;
struct FHitResult;
class UPrimitiveComponent;
class APhysicsVolume;
#pragma pack(push, 1)
class UMovementComponent : public UActorComponent {
public:
    USceneComponent* UpdatedComponent; // 0xc8
    UPrimitiveComponent* UpdatedPrimitive; // 0xd0
    char pad_d8[0x4];
    FVector Velocity; // 0xdc
    FVector PlaneConstraintNormal; // 0xe8
    FVector PlaneConstraintOrigin; // 0xf4
    uint8_t bUpdateOnlyIfRendered : 1; // 0x100
    uint8_t bAutoUpdateTickRegistration : 1; // 0x100
    uint8_t bTickBeforeOwner : 1; // 0x100
    uint8_t bAutoRegisterUpdatedComponent : 1; // 0x100
    uint8_t bConstrainToPlane : 1; // 0x100
    uint8_t bSnapToPlaneAtStart : 1; // 0x100
    uint8_t bAutoRegisterPhysicsVolumeUpdates : 1; // 0x100
    uint8_t bComponentShouldUpdatePhysicsVolume : 1; // 0x100
    char pad_101[0x2];
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0x103
    char pad_104[0x4];
    static UMovementComponent* StaticClass();
    void StopMovementImmediately();
    void SnapUpdatedComponentToPlane();
    void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);
    void SetPlaneConstraintOrigin(FVector PlaneOrigin);
    void SetPlaneConstraintNormal(FVector PlaneNormal);
    void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
    void SetPlaneConstraintEnabled(bool bEnabled);
    void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);
    float K2_GetModifiedMaxSpeed();
    float K2_GetMaxSpeedModifier();
    bool IsExceedingMaxSpeed(float MaxSpeed);
    FVector GetPlaneConstraintOrigin();
    FVector GetPlaneConstraintNormal();
    EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
    APhysicsVolume* GetPhysicsVolume();
    float GetMaxSpeed();
    float GetGravityZ();
    FVector ConstrainNormalToPlane(FVector Normal);
    FVector ConstrainLocationToPlane(FVector Location);
    FVector ConstrainDirectionToPlane(FVector Direction);
}; // Size: 0x108
#pragma pack(pop)
