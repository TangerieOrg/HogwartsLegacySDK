#pragma once
#include <cstdint>
#include "EFrictionCombineMode\Type.hpp"
#include "EPhysicalSurface.hpp"
#include "UObject.hpp"
class UDEPRECATED_PhysicalMaterialPropertyBase;
#pragma pack(push, 1)
class UPhysicalMaterial : public UObject {
public:
    float Friction; // 0x28
    float StaticFriction; // 0x2c
    EFrictionCombineMode::Type FrictionCombineMode; // 0x30
    bool bOverrideFrictionCombineMode; // 0x31
    char pad_32[0x2];
    float Restitution; // 0x34
    EFrictionCombineMode::Type RestitutionCombineMode; // 0x38
    bool bOverrideRestitutionCombineMode; // 0x39
    char pad_3a[0x2];
    float Density; // 0x3c
    float SleepLinearVelocityThreshold; // 0x40
    float SleepAngularVelocityThreshold; // 0x44
    int32_t SleepCounterThreshold; // 0x48
    float RaiseMassToPower; // 0x4c
    float DestructibleDamageThresholdScale; // 0x50
    char pad_54[0x4];
    UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58
    EPhysicalSurface SurfaceType; // 0x60
    char pad_61[0x1f];
    static UPhysicalMaterial* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
