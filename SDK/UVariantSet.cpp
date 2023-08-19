#include "FTransform.hpp"
#include "UFunction.hpp"
#include "ULevelVariantSets.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UVariant.hpp"
#include "UVariantSet.hpp"
UVariantSet* UVariantSet::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.VariantSet");
    return (UVariantSet*)res;
}
void UVariantSet::SetThumbnailFromTexture(UTexture2D* NewThumbnail) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture"));
    struct Params_SetThumbnailFromTexture {
        UTexture2D* NewThumbnail; // 0x0
    }; // Size: 0x8
    Params_SetThumbnailFromTexture params{};
    params.NewThumbnail = (UTexture2D*)NewThumbnail;
    ProcessEvent(func, &params);
}
void UVariantSet::SetThumbnailFromEditorViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport"));
    struct Params_SetThumbnailFromEditorViewport {
    }; // Size: 0x0
    Params_SetThumbnailFromEditorViewport params{};
    ProcessEvent(func, &params);
}
void UVariantSet::SetThumbnailFromFile(FString FilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile"));
    struct Params_SetThumbnailFromFile {
        FString FilePath; // 0x0
    }; // Size: 0x10
    Params_SetThumbnailFromFile params{};
    params.FilePath = (FString)FilePath;
    ProcessEvent(func, &params);
}
void UVariantSet::SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera"));
    struct Params_SetThumbnailFromCamera {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FTransform CameraTransform; // 0x10
        float FOVDegrees; // 0x40
        float MinZ; // 0x44
        float Gamma; // 0x48
    }; // Size: 0x4c
    Params_SetThumbnailFromCamera params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CameraTransform = (FTransform)CameraTransform;
    params.FOVDegrees = (float)FOVDegrees;
    params.MinZ = (float)MinZ;
    params.Gamma = (float)Gamma;
    ProcessEvent(func, &params);
    CameraTransform = params.CameraTransform;
}
void UVariantSet::SetDisplayText() {}
UVariant* UVariantSet::GetVariantByName(FString VariantName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.GetVariantByName"));
    struct Params_GetVariantByName {
        FString VariantName; // 0x0
        UVariant* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetVariantByName params{};
    params.VariantName = (FString)VariantName;
    ProcessEvent(func, &params);
    return (UVariant*)params.ReturnValue;
}
UVariant* UVariantSet::GetVariant(int32_t VariantIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.GetVariant"));
    struct Params_GetVariant {
        int32_t VariantIndex; // 0x0
        char pad_4[0x4];
        UVariant* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetVariant params{};
    params.VariantIndex = (int32_t)VariantIndex;
    ProcessEvent(func, &params);
    return (UVariant*)params.ReturnValue;
}
UTexture2D* UVariantSet::GetThumbnail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.GetThumbnail"));
    struct Params_GetThumbnail {
        UTexture2D* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetThumbnail params{};
    ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
ULevelVariantSets* UVariantSet::GetParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.GetParent"));
    struct Params_GetParent {
        ULevelVariantSets* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParent params{};
    ProcessEvent(func, &params);
    return (ULevelVariantSets*)params.ReturnValue;
}
int32_t UVariantSet::GetNumVariants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.VariantSet.GetNumVariants"));
    struct Params_GetNumVariants {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumVariants params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UVariantSet::GetDisplayText() {}
