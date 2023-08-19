#include "AActor.hpp"
#include "FMultiFX2DataArray.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMultiFX2Var.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMultiFX2Asset.hpp"
#include "UMultiFX2Manager.hpp"
#include "UObject.hpp"
void UMultiFX2Manager::SetLocation(FMultiFX2Handle& InHandle, FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SetLocation"));
    struct Params_SetLocation {
        FMultiFX2Handle InHandle; // 0x0
        FVector InLocation; // 0x8
    }; // Size: 0x14
    Params_SetLocation params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.InLocation = (FVector)InLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    InLocation = params.InLocation;
}
void UMultiFX2Manager::SetRotation(FMultiFX2Handle& InHandle, FRotator& InRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SetRotation"));
    struct Params_SetRotation {
        FMultiFX2Handle InHandle; // 0x0
        FRotator InRotation; // 0x8
    }; // Size: 0x14
    Params_SetRotation params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.InRotation = (FRotator)InRotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    InRotation = params.InRotation;
}
UMultiFX2Manager* UMultiFX2Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.MultiFX2Manager");
    return (UMultiFX2Manager*)res;
}
void UMultiFX2Manager::UpdateFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.UpdateFX"));
    struct Params_UpdateFX {
    }; // Size: 0x0
    Params_UpdateFX params{};
    ProcessEvent(func, &params);
}
FMultiFX2Handle UMultiFX2Manager::SpawnFXAsset(UMultiFX2Asset* FXAsset, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SpawnFXAsset"));
    struct Params_SpawnFXAsset {
        UMultiFX2Asset* FXAsset; // 0x0
        UObject* Target; // 0x8
        AActor* Instigator; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        FName AttachPointName; // 0x30
        FMultiFX2Handle ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnFXAsset params{};
    params.FXAsset = (UMultiFX2Asset*)FXAsset;
    params.Target = (UObject*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.AttachPointName = (FName)AttachPointName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMultiFX2Handle)params.ReturnValue;
}
FMultiFX2Handle UMultiFX2Manager::SpawnFX(FMultiFX2Var& Var, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SpawnFX"));
    struct Params_SpawnFX {
        FMultiFX2Var Var; // 0x0
        UObject* Target; // 0x8
        AActor* Instigator; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        FName AttachPointName; // 0x30
        FMultiFX2Handle ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnFX params{};
    params.Var = (FMultiFX2Var)Var;
    params.Target = (UObject*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.AttachPointName = (FName)AttachPointName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Var = params.Var;
    return (FMultiFX2Handle)params.ReturnValue;
}
FMultiFX2Handle UMultiFX2Manager::SpawnFXArray(TArray<FMultiFX2Var>& Var, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SpawnFXArray"));
    struct Params_SpawnFXArray {
        TArray<FMultiFX2Var> Var; // 0x0
        UObject* Target; // 0x10
        AActor* Instigator; // 0x18
        FVector Location; // 0x20
        FRotator Rotation; // 0x2c
        FName AttachPointName; // 0x38
        FMultiFX2Handle ReturnValue; // 0x40
    }; // Size: 0x48
    Params_SpawnFXArray params{};
    params.Var = (TArray<FMultiFX2Var>)Var;
    params.Target = (UObject*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.AttachPointName = (FName)AttachPointName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Var = params.Var;
    return (FMultiFX2Handle)params.ReturnValue;
}
void UMultiFX2Manager::SetFootprintLifetimeScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SetFootprintLifetimeScale"));
    struct Params_SetFootprintLifetimeScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetFootprintLifetimeScale params{};
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMultiFX2Manager::SetCustomTimeDilation(FMultiFX2Handle& InHandle, float Dilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.SetCustomTimeDilation"));
    struct Params_SetCustomTimeDilation {
        FMultiFX2Handle InHandle; // 0x0
        float Dilation; // 0x8
    }; // Size: 0xc
    Params_SetCustomTimeDilation params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.Dilation = (float)Dilation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
}
bool UMultiFX2Manager::IsActive(FMultiFX2Handle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.IsActive"));
    struct Params_IsActive {
        FMultiFX2Handle InHandle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActive params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (bool)params.ReturnValue;
}
bool UMultiFX2Manager::IsLooping(FMultiFX2Handle& InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.IsLooping"));
    struct Params_IsLooping {
        FMultiFX2Handle InHandle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLooping params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
    return (bool)params.ReturnValue;
}
void UMultiFX2Manager::DestroyFXHandle(FMultiFX2Handle& InHandle, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MultiFX2.MultiFX2Manager.DestroyFXHandle"));
    struct Params_DestroyFXHandle {
        FMultiFX2Handle InHandle; // 0x0
        bool bImmediate; // 0x8
    }; // Size: 0x9
    Params_DestroyFXHandle params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.bImmediate = (bool)bImmediate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InHandle = params.InHandle;
}
