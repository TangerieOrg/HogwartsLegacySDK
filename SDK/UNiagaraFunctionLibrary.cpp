#include "EAttachLocation\Type.hpp"
#include "ENCPoolMethod.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraFunctionLibrary.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
#include "UTexture2DArray.hpp"
#include "UVolumeTexture.hpp"
UNiagaraFunctionLibrary* UNiagaraFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraFunctionLibrary");
    return (UNiagaraFunctionLibrary*)res;
}
void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent"));
    struct Params_OverrideSystemUserVariableStaticMeshComponent {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        UStaticMeshComponent* StaticMeshComponent; // 0x18
    }; // Size: 0x20
    Params_OverrideSystemUserVariableStaticMeshComponent params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached"));
    struct Params_SpawnSystemAttached {
        UNiagaraSystem* SystemTemplate; // 0x0
        USceneComponent* AttachToComponent; // 0x8
        FName AttachPointName; // 0x10
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        EAttachLocation::Type LocationType; // 0x30
        bool bAutoDestroy; // 0x31
        bool bAutoActivate; // 0x32
        ENCPoolMethod PoolingMethod; // 0x33
        bool bPreCullCheck; // 0x34
        char pad_35[0x3];
        UNiagaraComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnSystemAttached params{};
    params.SystemTemplate = (UNiagaraSystem*)SystemTemplate;
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.LocationType = (EAttachLocation::Type)LocationType;
    params.bAutoDestroy = (bool)bAutoDestroy;
    params.bAutoActivate = (bool)bAutoActivate;
    params.PoolingMethod = (ENCPoolMethod)PoolingMethod;
    params.bPreCullCheck = (bool)bPreCullCheck;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation"));
    struct Params_SpawnSystemAtLocation {
        UObject* WorldContextObject; // 0x0
        UNiagaraSystem* SystemTemplate; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
        FVector Scale; // 0x28
        bool bAutoDestroy; // 0x34
        bool bAutoActivate; // 0x35
        ENCPoolMethod PoolingMethod; // 0x36
        bool bPreCullCheck; // 0x37
        UNiagaraComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_SpawnSystemAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SystemTemplate = (UNiagaraSystem*)SystemTemplate;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    params.bAutoDestroy = (bool)bAutoDestroy;
    params.bAutoActivate = (bool)bAutoActivate;
    params.PoolingMethod = (ENCPoolMethod)PoolingMethod;
    params.bPreCullCheck = (bool)bPreCullCheck;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
void UNiagaraFunctionLibrary::SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject"));
    struct Params_SetTextureObject {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        UTexture* Texture; // 0x18
    }; // Size: 0x20
    Params_SetTextureObject params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.Texture = (UTexture*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraFunctionLibrary::SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject"));
    struct Params_SetVolumeTextureObject {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        UVolumeTexture* Texture; // 0x18
    }; // Size: 0x20
    Params_SetVolumeTextureObject params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.Texture = (UVolumeTexture*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraFunctionLibrary::SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture2DArray* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject"));
    struct Params_SetTexture2DArrayObject {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        UTexture2DArray* Texture; // 0x18
    }; // Size: 0x20
    Params_SetTexture2DArrayObject params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.Texture = (UTexture2DArray*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions"));
    struct Params_SetSkeletalMeshDataInterfaceSamplingRegions {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        TArray<FName> SamplingRegions; // 0x18
    }; // Size: 0x28
    Params_SetSkeletalMeshDataInterfaceSamplingRegions params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.SamplingRegions = (TArray<FName>)SamplingRegions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SamplingRegions = params.SamplingRegions;
}
void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh"));
    struct Params_OverrideSystemUserVariableStaticMesh {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        UStaticMesh* StaticMesh; // 0x18
    }; // Size: 0x20
    Params_OverrideSystemUserVariableStaticMesh params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent"));
    struct Params_OverrideSystemUserVariableSkeletalMeshComponent {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FString OverrideName; // 0x8
        USkeletalMeshComponent* SkeletalMeshComponent; // 0x18
    }; // Size: 0x20
    Params_OverrideSystemUserVariableSkeletalMeshComponent params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FString)OverrideName;
    params.SkeletalMeshComponent = (USkeletalMeshComponent*)SkeletalMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection"));
    struct Params_GetNiagaraParameterCollection {
        UObject* WorldContextObject; // 0x0
        UNiagaraParameterCollection* Collection; // 0x8
        UNiagaraParameterCollectionInstance* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetNiagaraParameterCollection params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Collection = (UNiagaraParameterCollection*)Collection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNiagaraParameterCollectionInstance*)params.ReturnValue;
}
