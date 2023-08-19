#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class UPhysicsHandleComponent : public UActorComponent {
public:
    UPrimitiveComponent* GrabbedComponent; // 0xc8
    char pad_d0[0x8];
    uint8_t pad_bitfield_d8_0 : 1;
    uint8_t bSoftAngularConstraint : 1; // 0xd8
    uint8_t bSoftLinearConstraint : 1; // 0xd8
    uint8_t bInterpolateTarget : 1; // 0xd8
    uint8_t pad_bitfield_d8_4 : 4;
    char pad_d9[0x3];
    float LinearDamping; // 0xdc
    float LinearStiffness; // 0xe0
    float AngularDamping; // 0xe4
    float AngularStiffness; // 0xe8
    char pad_ec[0x64];
    float InterpolationSpeed; // 0x150
    char pad_154[0x9c];
    static UPhysicsHandleComponent* StaticClass();
    void SetTargetRotation(FRotator NewRotation);
    void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);
    void SetTargetLocation(FVector NewLocation);
    void SetLinearStiffness(float NewLinearStiffness);
    void SetLinearDamping(float NewLinearDamping);
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    void SetAngularStiffness(float NewAngularStiffness);
    void SetAngularDamping(float NewAngularDamping);
    void ReleaseComponent();
    void GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);
    void GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);
    void GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);
    void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation);
    UPrimitiveComponent* GetGrabbedComponent();
}; // Size: 0x1f0
#pragma pack(pop)
