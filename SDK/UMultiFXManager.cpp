#include "AActor.hpp"
#include "EAttachLocation\Type.hpp"
#include "EDetachmentRule.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMultiFX.hpp"
#include "FMultiFXHandle.hpp"
#include "FMultiFXPlus.hpp"
#include "FMultiFXPlusHandles.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMultiFXManager.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USkinFXComponent.hpp"
UMultiFXManager* UMultiFXManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFXManager");
    return (UMultiFXManager*)res;
}
void UMultiFXManager::UpdateFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.UpdateFX"));
    struct Params_UpdateFX {
    }; // Size: 0x0
    Params_UpdateFX params{};
    ProcessEvent(func, &params);
}
void UMultiFXManager::SetVfxRotation(FMultiFXHandle& InHandle, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SetVfxRotation"));
    struct Params_SetVfxRotation {
        FMultiFXHandle InHandle; // 0x0
        FRotator Rotation; // 0x8
    }; // Size: 0x14
    Params_SetVfxRotation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    Rotation = params.Rotation;
}
void UMultiFXManager::SpawnMultiFXPlus(FMultiFXPlus& MultiPlus, UObject* Object, FMultiFXPlusHandles& FXHandles, FVector& Location, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SpawnMultiFXPlus"));
    struct Params_SpawnMultiFXPlus {
        FMultiFXPlus MultiPlus; // 0x0
        UObject* Object; // 0x70
        FMultiFXPlusHandles FXHandles; // 0x78
        FVector Location; // 0x88
        FRotator Rotation; // 0x94
    }; // Size: 0xa0
    Params_SpawnMultiFXPlus params{};
    params.MultiPlus = (FMultiFXPlus)MultiPlus;
    params.Object = (UObject*)Object;
    params.FXHandles = (FMultiFXPlusHandles)FXHandles;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MultiPlus = params.MultiPlus;
    FXHandles = params.FXHandles;
    Location = params.Location;
    Rotation = params.Rotation;
}
FMultiFXHandle UMultiFXManager::SpawnMultiFXAttached(FMultiFX& MultiFX, USceneComponent* AttachToComponent, FMaterialSwapParameters& MaterialSwapParameters, FName AttachPointName, FVector& Location, FRotator& Rotation, FVector& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SpawnMultiFXAttached"));
    struct Params_SpawnMultiFXAttached {
        FMultiFX MultiFX; // 0x0
        USceneComponent* AttachToComponent; // 0x30
        FMaterialSwapParameters MaterialSwapParameters; // 0x38
        FName AttachPointName; // 0x88
        FVector Location; // 0x90
        FRotator Rotation; // 0x9c
        FVector Scale; // 0xa8
        EAttachLocation::Type LocationType; // 0xb4
        bool bAutoDestroy; // 0xb5
        char pad_b6[0x2];
        FMultiFXHandle ReturnValue; // 0xb8
    }; // Size: 0xc0
    Params_SpawnMultiFXAttached params{};
    params.MultiFX = (FMultiFX)MultiFX;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.MaterialSwapParameters = (FMaterialSwapParameters)MaterialSwapParameters;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MultiFX = params.MultiFX;
    MaterialSwapParameters = params.MaterialSwapParameters;
    Location = params.Location;
    Rotation = params.Rotation;
    Scale = params.Scale;
    return (FMultiFXHandle)params.ReturnValue;
}
void UMultiFXManager::SetCustomTimeDilation(FMultiFXHandle& InHandle, float Dilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SetCustomTimeDilation"));
    struct Params_SetCustomTimeDilation {
        FMultiFXHandle InHandle; // 0x0
        float Dilation; // 0x8
    }; // Size: 0xc
    Params_SetCustomTimeDilation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    params.Dilation = (float)Dilation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
}
FMultiFXHandle UMultiFXManager::SpawnMultiFXAtLocation(FMultiFX& MultiFX, UObject* WorldContextObject, FMaterialSwapParameters& MaterialSwapParameters, FVector& Location, FRotator& Rotation, FVector& Scale, bool bAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SpawnMultiFXAtLocation"));
    struct Params_SpawnMultiFXAtLocation {
        FMultiFX MultiFX; // 0x0
        UObject* WorldContextObject; // 0x30
        FMaterialSwapParameters MaterialSwapParameters; // 0x38
        FVector Location; // 0x88
        FRotator Rotation; // 0x94
        FVector Scale; // 0xa0
        bool bAutoDestroy; // 0xac
        char pad_ad[0x3];
        FMultiFXHandle ReturnValue; // 0xb0
    }; // Size: 0xb8
    Params_SpawnMultiFXAtLocation params{};
    params.MultiFX = (FMultiFX)MultiFX;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MaterialSwapParameters = (FMaterialSwapParameters)MaterialSwapParameters;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    params.bAutoDestroy = (bool)bAutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MultiFX = params.MultiFX;
    MaterialSwapParameters = params.MaterialSwapParameters;
    Location = params.Location;
    Rotation = params.Rotation;
    Scale = params.Scale;
    return (FMultiFXHandle)params.ReturnValue;
}
void UMultiFXManager::SetVfxLocation(FMultiFXHandle& InHandle, FVector& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.SetVfxLocation"));
    struct Params_SetVfxLocation {
        FMultiFXHandle InHandle; // 0x0
        FVector Location; // 0x8
    }; // Size: 0x14
    Params_SetVfxLocation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    Location = params.Location;
}
void UMultiFXManager::MovementStopped(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.MovementStopped"));
    struct Params_MovementStopped {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_MovementStopped params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
bool UMultiFXManager::IsVfxPlaying(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.IsVfxPlaying"));
    struct Params_IsVfxPlaying {
        FMultiFXHandle InHandle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsVfxPlaying params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (bool)params.ReturnValue;
}
USkinFXComponent* UMultiFXManager::GetSkinFxComponent(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetSkinFxComponent"));
    struct Params_GetSkinFxComponent {
        FMultiFXHandle InHandle; // 0x0
        USkinFXComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSkinFxComponent params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (USkinFXComponent*)params.ReturnValue;
}
bool UMultiFXManager::IsVfxLooping(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.IsVfxLooping"));
    struct Params_IsVfxLooping {
        FMultiFXHandle InHandle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsVfxLooping params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (bool)params.ReturnValue;
}
bool UMultiFXManager::IsValid(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.IsValid"));
    struct Params_IsValid {
        FMultiFXHandle InHandle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValid params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (bool)params.ReturnValue;
}
bool UMultiFXManager::IsPlusComplete(FMultiFXPlusHandles& InHandles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.IsPlusComplete"));
    struct Params_IsPlusComplete {
        FMultiFXPlusHandles InHandles; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsPlusComplete params{};
    params.InHandles = (FMultiFXPlusHandles)InHandles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandles = params.InHandles;
    return (bool)params.ReturnValue;
}
FRotator UMultiFXManager::GetVfxRotation(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetVfxRotation"));
    struct Params_GetVfxRotation {
        FMultiFXHandle InHandle; // 0x0
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetVfxRotation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (FRotator)params.ReturnValue;
}
FVector UMultiFXManager::GetVfxLocation(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetVfxLocation"));
    struct Params_GetVfxLocation {
        FMultiFXHandle InHandle; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetVfxLocation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (FVector)params.ReturnValue;
}
int32_t UMultiFXManager::GetSfxHandle(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetSfxHandle"));
    struct Params_GetSfxHandle {
        FMultiFXHandle InHandle; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSfxHandle params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (int32_t)params.ReturnValue;
}
UParticleSystemComponent* UMultiFXManager::GetParticleSystemComponent(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetParticleSystemComponent"));
    struct Params_GetParticleSystemComponent {
        FMultiFXHandle InHandle; // 0x0
        UParticleSystemComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetParticleSystemComponent params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (UParticleSystemComponent*)params.ReturnValue;
}
UNiagaraComponent* UMultiFXManager::GetNiagaraComponent(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetNiagaraComponent"));
    struct Params_GetNiagaraComponent {
        FMultiFXHandle InHandle; // 0x0
        UNiagaraComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNiagaraComponent params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (UNiagaraComponent*)params.ReturnValue;
}
float UMultiFXManager::GetCustomTimeDilation(FMultiFXHandle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.GetCustomTimeDilation"));
    struct Params_GetCustomTimeDilation {
        FMultiFXHandle InHandle; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCustomTimeDilation params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (float)params.ReturnValue;
}
void UMultiFXManager::DetachVfxRule(FMultiFXHandle& InHandle, EDetachmentRule DetachmentRules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.DetachVfxRule"));
    struct Params_DetachVfxRule {
        FMultiFXHandle InHandle; // 0x0
        EDetachmentRule DetachmentRules; // 0x8
    }; // Size: 0x9
    Params_DetachVfxRule params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    params.DetachmentRules = (EDetachmentRule)DetachmentRules;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
}
void UMultiFXManager::DestroyPlus(FMultiFXPlusHandles& InHandles, bool bImmediate, ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.DestroyPlus"));
    struct Params_DestroyPlus {
        FMultiFXPlusHandles InHandles; // 0x0
        bool bImmediate; // 0x10
        ESkinFXEffectEndStyle EndStyle; // 0x11
    }; // Size: 0x12
    Params_DestroyPlus params{};
    params.InHandles = (FMultiFXPlusHandles)InHandles;
    params.bImmediate = (bool)bImmediate;
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandles = params.InHandles;
}
void UMultiFXManager::Destroy(FMultiFXHandle& InHandle, bool bImmediate, ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFXManager.Destroy"));
    struct Params_Destroy {
        FMultiFXHandle InHandle; // 0x0
        bool bImmediate; // 0x8
        ESkinFXEffectEndStyle EndStyle; // 0x9
    }; // Size: 0xa
    Params_Destroy params{};
    params.InHandle = (FMultiFXHandle)InHandle;
    params.bImmediate = (bool)bImmediate;
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
}
