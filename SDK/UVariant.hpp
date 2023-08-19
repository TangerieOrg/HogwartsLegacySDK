#pragma once
#include <cstdint>
#include "FVariantDependency.hpp"
#include "UObject.hpp"
class UVariantObjectBinding;
class ULevelVariantSets;
class UTexture2D;
struct FTransform;
class UVariantSet;
class AActor;
#pragma pack(push, 1)
class UVariant : public UObject {
public:
    TArray<FVariantDependency> Dependencies; // 0x28
    char pad_38[0x30];
    TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
    UTexture2D* Thumbnail; // 0x78
    static UVariant* StaticClass();
    void SwitchOn();
    void SetThumbnailFromTexture(UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText();
    void SetDependency(int32_t Index, FVariantDependency& Dependency);
    bool IsActive();
    UTexture2D* GetThumbnail();
    UVariantSet* GetParent();
    int32_t GetNumDependencies();
    int32_t GetNumActors();
    void GetDisplayText();
    TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    FVariantDependency GetDependency(int32_t Index);
    AActor* GetActor(int32_t ActorIndex);
    void DeleteDependency(int32_t Index);
    int32_t AddDependency(FVariantDependency& Dependency);
}; // Size: 0x80
#pragma pack(pop)
