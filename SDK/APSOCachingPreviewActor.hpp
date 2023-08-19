#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPSOCachePreviewMode.hpp"
class UPrimitiveComponent;
class UClass;
struct FPreviewAssetTypeData;
class UObject;
#pragma pack(push, 1)
class APSOCachingPreviewActor : public AActor {
public:
    char pad_248[0x10];
    EPSOCachePreviewMode PreviewMode; // 0x258
    char pad_259[0x3];
    int32_t PreviewFramesCount; // 0x25c
    float PreviewTime; // 0x260
    char pad_264[0xe4];
    static APSOCachingPreviewActor* StaticClass();
    void SetupManagedPrimitiveComponent(UPrimitiveComponent* InComponent);
    void ResetStaticMeshPreview(UPrimitiveComponent* Primitive);
    void ResetNiagaraSystemPreview(UPrimitiveComponent* Primitive);
    void RegisterPreviewAssetTypeData(UClass* AssetType, FPreviewAssetTypeData& AssetTypeData);
    void RegisterAssetTypePreviewComponent(UClass* AssetType, UPrimitiveComponent* InComponent);
    void ActivateStaticMeshPreview(UPrimitiveComponent* Primitive, UObject* Asset);
    void ActivateNiagaraSystemPreview(UPrimitiveComponent* Primitive, UObject* Asset);
}; // Size: 0x348
#pragma pack(pop)
