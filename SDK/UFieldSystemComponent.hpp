#pragma once
#include <cstdint>
#include "EFieldPhysicsType.hpp"
#include "FFieldObjectCommands.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class UFieldSystem;
class UFieldSystemMetaData;
class UFieldNodeBase;
#pragma pack(push, 1)
class UFieldSystemComponent : public UPrimitiveComponent {
public:
    UFieldSystem* FieldSystem; // 0x480
    bool bIsWorldField; // 0x488
    bool bIsChaosField; // 0x489
    char pad_48a[0x6];
    TArray<void*> SupportedSolvers; // 0x490
    FFieldObjectCommands ConstructionCommands; // 0x4a0
    FFieldObjectCommands BufferCommands; // 0x4d0
    char pad_500[0x50];
    static UFieldSystemComponent* StaticClass();
    void ResetFieldSystem();
    void RemovePersistentFields();
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t iterations);
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    void AddPersistentField(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    void AddFieldCommand(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
}; // Size: 0x550
#pragma pack(pop)
