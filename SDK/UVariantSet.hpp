#pragma once
#include <cstdint>
#include "UObject.hpp"
class UVariant;
class UTexture2D;
struct FTransform;
class ULevelVariantSets;
#pragma pack(push, 1)
class UVariantSet : public UObject {
public:
    char pad_28[0x30];
    bool bExpanded; // 0x58
    char pad_59[0x7];
    TArray<UVariant*> Variants; // 0x60
    UTexture2D* Thumbnail; // 0x70
    static UVariantSet* StaticClass();
    void SetThumbnailFromTexture(UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText();
    UVariant* GetVariantByName(FString VariantName);
    UVariant* GetVariant(int32_t VariantIndex);
    UTexture2D* GetThumbnail();
    ULevelVariantSets* GetParent();
    int32_t GetNumVariants();
    void GetDisplayText();
}; // Size: 0x78
#pragma pack(pop)
