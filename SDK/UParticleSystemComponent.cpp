#include "EAttachLocation\Type.hpp"
#include "EAttachmentRule.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "ETrailWidthMode.hpp"
#include "FParticleSysParam.hpp"
#include "FVector.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "UFXSystemComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UParticleSystemReplay.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void UParticleSystemComponent::SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetTrailSourceData"));
    struct Params_SetTrailSourceData {
        FName InFirstSocketName; // 0x0
        FName InSecondSocketName; // 0x8
        ETrailWidthMode InWidthMode; // 0x10
        char pad_11[0x3];
        float InWidth; // 0x14
    }; // Size: 0x18
    Params_SetTrailSourceData params{};
    params.InFirstSocketName = (FName)InFirstSocketName;
    params.InSecondSocketName = (FName)InSecondSocketName;
    params.InWidthMode = (ETrailWidthMode)InWidthMode;
    params.InWidth = (float)InWidth;
    ProcessEvent(func, &params);
}
UParticleSystemComponent* UParticleSystemComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleSystemComponent");
    return (UParticleSystemComponent*)res;
}
void UParticleSystemComponent::SetTemplate(UParticleSystem* NewTemplate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetTemplate"));
    struct Params_SetTemplate {
        UParticleSystem* NewTemplate; // 0x0
    }; // Size: 0x8
    Params_SetTemplate params{};
    params.NewTemplate = (UParticleSystem*)NewTemplate;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamTargetStrength"));
    struct Params_SetBeamTargetStrength {
        int32_t EmitterIndex; // 0x0
        float NewTargetStrength; // 0x4
        int32_t TargetIndex; // 0x8
    }; // Size: 0xc
    Params_SetBeamTargetStrength params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewTargetStrength = (float)NewTargetStrength;
    params.TargetIndex = (int32_t)TargetIndex;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetMaterialParameter(FName ParameterName, UMaterialInterface* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetMaterialParameter"));
    struct Params_SetMaterialParameter {
        FName ParameterName; // 0x0
        UMaterialInterface* Param; // 0x8
    }; // Size: 0x10
    Params_SetMaterialParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (UMaterialInterface*)Param;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamTargetTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t TargetIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamTargetTangent"));
    struct Params_SetBeamTargetTangent {
        int32_t EmitterIndex; // 0x0
        FVector NewTangentPoint; // 0x4
        int32_t TargetIndex; // 0x10
    }; // Size: 0x14
    Params_SetBeamTargetTangent params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewTangentPoint = (FVector)NewTangentPoint;
    params.TargetIndex = (int32_t)TargetIndex;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamTargetPoint(int32_t EmitterIndex, FVector NewTargetPoint, int32_t TargetIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamTargetPoint"));
    struct Params_SetBeamTargetPoint {
        int32_t EmitterIndex; // 0x0
        FVector NewTargetPoint; // 0x4
        int32_t TargetIndex; // 0x10
    }; // Size: 0x14
    Params_SetBeamTargetPoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewTargetPoint = (FVector)NewTargetPoint;
    params.TargetIndex = (int32_t)TargetIndex;
    ProcessEvent(func, &params);
}
bool UParticleSystemComponent::GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamTargetStrength"));
    struct Params_GetBeamTargetStrength {
        int32_t EmitterIndex; // 0x0
        int32_t TargetIndex; // 0x4
        float OutTargetStrength; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetBeamTargetStrength params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.TargetIndex = (int32_t)TargetIndex;
    params.OutTargetStrength = (float)OutTargetStrength;
    ProcessEvent(func, &params);
    OutTargetStrength = params.OutTargetStrength;
    return (bool)params.ReturnValue;
}
void UParticleSystemComponent::SetBeamSourceTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t SourceIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamSourceTangent"));
    struct Params_SetBeamSourceTangent {
        int32_t EmitterIndex; // 0x0
        FVector NewTangentPoint; // 0x4
        int32_t SourceIndex; // 0x10
    }; // Size: 0x14
    Params_SetBeamSourceTangent params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewTangentPoint = (FVector)NewTangentPoint;
    params.SourceIndex = (int32_t)SourceIndex;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::GenerateParticleEvent(FName InEventName, float InEmitterTime, FVector InLocation, FVector InDirection, FVector InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GenerateParticleEvent"));
    struct Params_GenerateParticleEvent {
        FName InEventName; // 0x0
        float InEmitterTime; // 0x8
        FVector InLocation; // 0xc
        FVector InDirection; // 0x18
        FVector InVelocity; // 0x24
    }; // Size: 0x30
    Params_GenerateParticleEvent params{};
    params.InEventName = (FName)InEventName;
    params.InEmitterTime = (float)InEmitterTime;
    params.InLocation = (FVector)InLocation;
    params.InDirection = (FVector)InDirection;
    params.InVelocity = (FVector)InVelocity;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamSourceStrength"));
    struct Params_SetBeamSourceStrength {
        int32_t EmitterIndex; // 0x0
        float NewSourceStrength; // 0x4
        int32_t SourceIndex; // 0x8
    }; // Size: 0xc
    Params_SetBeamSourceStrength params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewSourceStrength = (float)NewSourceStrength;
    params.SourceIndex = (int32_t)SourceIndex;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamSourcePoint(int32_t EmitterIndex, FVector NewSourcePoint, int32_t SourceIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamSourcePoint"));
    struct Params_SetBeamSourcePoint {
        int32_t EmitterIndex; // 0x0
        FVector NewSourcePoint; // 0x4
        int32_t SourceIndex; // 0x10
    }; // Size: 0x14
    Params_SetBeamSourcePoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewSourcePoint = (FVector)NewSourcePoint;
    params.SourceIndex = (int32_t)SourceIndex;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetBeamEndPoint(int32_t EmitterIndex, FVector NewEndPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetBeamEndPoint"));
    struct Params_SetBeamEndPoint {
        int32_t EmitterIndex; // 0x0
        FVector NewEndPoint; // 0x4
    }; // Size: 0x10
    Params_SetBeamEndPoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.NewEndPoint = (FVector)NewEndPoint;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::SetAutoAttachParams(USceneComponent* Parent, FName SocketName, EAttachLocation::Type LocationType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.SetAutoAttachParams"));
    struct Params_SetAutoAttachParams {
        USceneComponent* Parent; // 0x0
        FName SocketName; // 0x8
        EAttachLocation::Type LocationType; // 0x10
    }; // Size: 0x11
    Params_SetAutoAttachParams params{};
    params.Parent = (USceneComponent*)Parent;
    params.SocketName = (FName)SocketName;
    params.LocationType = (EAttachLocation::Type)LocationType;
    ProcessEvent(func, &params);
}
void UParticleSystemComponent::BeginTrails(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.BeginTrails"));
    struct Params_BeginTrails {
        FName InFirstSocketName; // 0x0
        FName InSecondSocketName; // 0x8
        ETrailWidthMode InWidthMode; // 0x10
        char pad_11[0x3];
        float InWidth; // 0x14
    }; // Size: 0x18
    Params_BeginTrails params{};
    params.InFirstSocketName = (FName)InFirstSocketName;
    params.InSecondSocketName = (FName)InSecondSocketName;
    params.InWidthMode = (ETrailWidthMode)InWidthMode;
    params.InWidth = (float)InWidth;
    ProcessEvent(func, &params);
}
bool UParticleSystemComponent::GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, FVector& OutTangentPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamTargetTangent"));
    struct Params_GetBeamTargetTangent {
        int32_t EmitterIndex; // 0x0
        int32_t TargetIndex; // 0x4
        FVector OutTangentPoint; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetBeamTargetTangent params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.TargetIndex = (int32_t)TargetIndex;
    params.OutTangentPoint = (FVector)OutTangentPoint;
    ProcessEvent(func, &params);
    OutTangentPoint = params.OutTangentPoint;
    return (bool)params.ReturnValue;
}
int32_t UParticleSystemComponent::GetNumActiveParticles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetNumActiveParticles"));
    struct Params_GetNumActiveParticles {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumActiveParticles params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UParticleSystemComponent::GetBeamEndPoint(int32_t EmitterIndex, FVector& OutEndPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamEndPoint"));
    struct Params_GetBeamEndPoint {
        int32_t EmitterIndex; // 0x0
        FVector OutEndPoint; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetBeamEndPoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.OutEndPoint = (FVector)OutEndPoint;
    ProcessEvent(func, &params);
    OutEndPoint = params.OutEndPoint;
    return (bool)params.ReturnValue;
}
UMaterialInterface* UParticleSystemComponent::GetNamedMaterial(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetNamedMaterial"));
    struct Params_GetNamedMaterial {
        FName InName; // 0x0
        UMaterialInterface* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNamedMaterial params{};
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
bool UParticleSystemComponent::GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, FVector& OutTargetPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamTargetPoint"));
    struct Params_GetBeamTargetPoint {
        int32_t EmitterIndex; // 0x0
        int32_t TargetIndex; // 0x4
        FVector OutTargetPoint; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetBeamTargetPoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.TargetIndex = (int32_t)TargetIndex;
    params.OutTargetPoint = (FVector)OutTargetPoint;
    ProcessEvent(func, &params);
    OutTargetPoint = params.OutTargetPoint;
    return (bool)params.ReturnValue;
}
bool UParticleSystemComponent::GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, FVector& OutTangentPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamSourceTangent"));
    struct Params_GetBeamSourceTangent {
        int32_t EmitterIndex; // 0x0
        int32_t SourceIndex; // 0x4
        FVector OutTangentPoint; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetBeamSourceTangent params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.SourceIndex = (int32_t)SourceIndex;
    params.OutTangentPoint = (FVector)OutTangentPoint;
    ProcessEvent(func, &params);
    OutTangentPoint = params.OutTangentPoint;
    return (bool)params.ReturnValue;
}
bool UParticleSystemComponent::GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamSourceStrength"));
    struct Params_GetBeamSourceStrength {
        int32_t EmitterIndex; // 0x0
        int32_t SourceIndex; // 0x4
        float OutSourceStrength; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetBeamSourceStrength params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.SourceIndex = (int32_t)SourceIndex;
    params.OutSourceStrength = (float)OutSourceStrength;
    ProcessEvent(func, &params);
    OutSourceStrength = params.OutSourceStrength;
    return (bool)params.ReturnValue;
}
bool UParticleSystemComponent::GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, FVector& OutSourcePoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.GetBeamSourcePoint"));
    struct Params_GetBeamSourcePoint {
        int32_t EmitterIndex; // 0x0
        int32_t SourceIndex; // 0x4
        FVector OutSourcePoint; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetBeamSourcePoint params{};
    params.EmitterIndex = (int32_t)EmitterIndex;
    params.SourceIndex = (int32_t)SourceIndex;
    params.OutSourcePoint = (FVector)OutSourcePoint;
    ProcessEvent(func, &params);
    OutSourcePoint = params.OutSourcePoint;
    return (bool)params.ReturnValue;
}
void UParticleSystemComponent::EndTrails() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.EndTrails"));
    struct Params_EndTrails {
    }; // Size: 0x0
    Params_EndTrails params{};
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* UParticleSystemComponent::CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance"));
    struct Params_CreateNamedDynamicMaterialInstance {
        FName InName; // 0x0
        UMaterialInterface* SourceMaterial; // 0x8
        UMaterialInstanceDynamic* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateNamedDynamicMaterialInstance params{};
    params.InName = (FName)InName;
    params.SourceMaterial = (UMaterialInterface*)SourceMaterial;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
