#include "EFieldPhysicsType.hpp"
#include "FFieldObjectCommands.hpp"
#include "FVector.hpp"
#include "UFieldNodeBase.hpp"
#include "UFieldSystem.hpp"
#include "UFieldSystemComponent.hpp"
#include "UFieldSystemMetaData.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UFieldSystemComponent* UFieldSystemComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemComponent");
    return (UFieldSystemComponent*)res;
}
void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, FVector Position, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField"));
    struct Params_ApplyStayDynamicField {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Position; // 0x4
        float Radius; // 0x10
    }; // Size: 0x14
    Params_ApplyStayDynamicField params{};
    params.Enabled = (bool)Enabled;
    params.Position = (FVector)Position;
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ResetFieldSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem"));
    struct Params_ResetFieldSystem {
    }; // Size: 0x0
    Params_ResetFieldSystem params{};
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::RemovePersistentFields() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields"));
    struct Params_RemovePersistentFields {
    }; // Size: 0x0
    Params_RemovePersistentFields params{};
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce"));
    struct Params_ApplyUniformVectorFalloffForce {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Position; // 0x4
        FVector Direction; // 0x10
        float Radius; // 0x1c
        float Magnitude; // 0x20
    }; // Size: 0x24
    Params_ApplyUniformVectorFalloffForce params{};
    params.Enabled = (bool)Enabled;
    params.Position = (FVector)Position;
    params.Direction = (FVector)Direction;
    params.Radius = (float)Radius;
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyRadialForce(bool Enabled, FVector Position, float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce"));
    struct Params_ApplyRadialForce {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Position; // 0x4
        float Magnitude; // 0x10
    }; // Size: 0x14
    Params_ApplyRadialForce params{};
    params.Enabled = (bool)Enabled;
    params.Position = (FVector)Position;
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce"));
    struct Params_ApplyRadialVectorFalloffForce {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Position; // 0x4
        float Radius; // 0x10
        float Magnitude; // 0x14
    }; // Size: 0x18
    Params_ApplyRadialVectorFalloffForce params{};
    params.Enabled = (bool)Enabled;
    params.Position = (FVector)Position;
    params.Radius = (float)Radius;
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t iterations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField"));
    struct Params_ApplyStrainField {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Position; // 0x4
        float Radius; // 0x10
        float Magnitude; // 0x14
        int32_t iterations; // 0x18
    }; // Size: 0x1c
    Params_ApplyStrainField params{};
    params.Enabled = (bool)Enabled;
    params.Position = (FVector)Position;
    params.Radius = (float)Radius;
    params.Magnitude = (float)Magnitude;
    params.iterations = (int32_t)iterations;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField"));
    struct Params_ApplyPhysicsField {
        bool Enabled; // 0x0
        EFieldPhysicsType Target; // 0x1
        char pad_2[0x6];
        UFieldSystemMetaData* MetaData; // 0x8
        UFieldNodeBase* Field; // 0x10
    }; // Size: 0x18
    Params_ApplyPhysicsField params{};
    params.Enabled = (bool)Enabled;
    params.Target = (EFieldPhysicsType)Target;
    params.MetaData = (UFieldSystemMetaData*)MetaData;
    params.Field = (UFieldNodeBase*)Field;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce"));
    struct Params_ApplyLinearForce {
        bool Enabled; // 0x0
        char pad_1[0x3];
        FVector Direction; // 0x4
        float Magnitude; // 0x10
    }; // Size: 0x14
    Params_ApplyLinearForce params{};
    params.Enabled = (bool)Enabled;
    params.Direction = (FVector)Direction;
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::AddPersistentField(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField"));
    struct Params_AddPersistentField {
        bool Enabled; // 0x0
        EFieldPhysicsType Target; // 0x1
        char pad_2[0x6];
        UFieldSystemMetaData* MetaData; // 0x8
        UFieldNodeBase* Field; // 0x10
    }; // Size: 0x18
    Params_AddPersistentField params{};
    params.Enabled = (bool)Enabled;
    params.Target = (EFieldPhysicsType)Target;
    params.MetaData = (UFieldSystemMetaData*)MetaData;
    params.Field = (UFieldNodeBase*)Field;
    ProcessEvent(func, &params);
}
void UFieldSystemComponent::AddFieldCommand(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand"));
    struct Params_AddFieldCommand {
        bool Enabled; // 0x0
        EFieldPhysicsType Target; // 0x1
        char pad_2[0x6];
        UFieldSystemMetaData* MetaData; // 0x8
        UFieldNodeBase* Field; // 0x10
    }; // Size: 0x18
    Params_AddFieldCommand params{};
    params.Enabled = (bool)Enabled;
    params.Target = (EFieldPhysicsType)Target;
    params.MetaData = (UFieldSystemMetaData*)MetaData;
    params.Field = (UFieldNodeBase*)Field;
    ProcessEvent(func, &params);
}
