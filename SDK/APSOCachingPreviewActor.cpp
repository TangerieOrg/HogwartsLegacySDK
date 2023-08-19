#include "AActor.hpp"
#include "APSOCachingPreviewActor.hpp"
#include "EPSOCachePreviewMode.hpp"
#include "FPreviewAssetTypeData.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
void APSOCachingPreviewActor::ActivateNiagaraSystemPreview(UPrimitiveComponent* Primitive, UObject* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.ActivateNiagaraSystemPreview"));
    struct Params_ActivateNiagaraSystemPreview {
        UPrimitiveComponent* Primitive; // 0x0
        UObject* Asset; // 0x8
    }; // Size: 0x10
    Params_ActivateNiagaraSystemPreview params{};
    params.Primitive = (UPrimitiveComponent*)Primitive;
    params.Asset = (UObject*)Asset;
    ProcessEvent(func, &params);
}
void APSOCachingPreviewActor::RegisterAssetTypePreviewComponent(UClass* AssetType, UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.RegisterAssetTypePreviewComponent"));
    struct Params_RegisterAssetTypePreviewComponent {
        UClass* AssetType; // 0x0
        UPrimitiveComponent* InComponent; // 0x8
    }; // Size: 0x10
    Params_RegisterAssetTypePreviewComponent params{};
    params.AssetType = (UClass*)AssetType;
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
APSOCachingPreviewActor* APSOCachingPreviewActor::StaticClass() {
    static auto res = find_uobject("Class /Script/PSOCaching.PSOCachingPreviewActor");
    return (APSOCachingPreviewActor*)res;
}
void APSOCachingPreviewActor::SetupManagedPrimitiveComponent(UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.SetupManagedPrimitiveComponent"));
    struct Params_SetupManagedPrimitiveComponent {
        UPrimitiveComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_SetupManagedPrimitiveComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
void APSOCachingPreviewActor::ActivateStaticMeshPreview(UPrimitiveComponent* Primitive, UObject* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.ActivateStaticMeshPreview"));
    struct Params_ActivateStaticMeshPreview {
        UPrimitiveComponent* Primitive; // 0x0
        UObject* Asset; // 0x8
    }; // Size: 0x10
    Params_ActivateStaticMeshPreview params{};
    params.Primitive = (UPrimitiveComponent*)Primitive;
    params.Asset = (UObject*)Asset;
    ProcessEvent(func, &params);
}
void APSOCachingPreviewActor::ResetStaticMeshPreview(UPrimitiveComponent* Primitive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.ResetStaticMeshPreview"));
    struct Params_ResetStaticMeshPreview {
        UPrimitiveComponent* Primitive; // 0x0
    }; // Size: 0x8
    Params_ResetStaticMeshPreview params{};
    params.Primitive = (UPrimitiveComponent*)Primitive;
    ProcessEvent(func, &params);
}
void APSOCachingPreviewActor::ResetNiagaraSystemPreview(UPrimitiveComponent* Primitive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.ResetNiagaraSystemPreview"));
    struct Params_ResetNiagaraSystemPreview {
        UPrimitiveComponent* Primitive; // 0x0
    }; // Size: 0x8
    Params_ResetNiagaraSystemPreview params{};
    params.Primitive = (UPrimitiveComponent*)Primitive;
    ProcessEvent(func, &params);
}
void APSOCachingPreviewActor::RegisterPreviewAssetTypeData(UClass* AssetType, FPreviewAssetTypeData& AssetTypeData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PSOCaching.PSOCachingPreviewActor.RegisterPreviewAssetTypeData"));
    struct Params_RegisterPreviewAssetTypeData {
        UClass* AssetType; // 0x0
        FPreviewAssetTypeData AssetTypeData; // 0x8
    }; // Size: 0x28
    Params_RegisterPreviewAssetTypeData params{};
    params.AssetType = (UClass*)AssetType;
    params.AssetTypeData = (FPreviewAssetTypeData)AssetTypeData;
    ProcessEvent(func, &params);
    AssetTypeData = params.AssetTypeData;
}
