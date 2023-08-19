#include "AActor.hpp"
#include "FTransform.hpp"
#include "FVariantDependency.hpp"
#include "UFunction.hpp"
#include "ULevelVariantSets.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UVariant.hpp"
#include "UVariantObjectBinding.hpp"
#include "UVariantSet.hpp"
AActor* UVariant::GetActor(int32_t ActorIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetActor"));
    struct Params_GetActor {
        int32_t ActorIndex; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActor params{};
    params.ActorIndex = (int32_t)ActorIndex;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UVariant* UVariant::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.Variant");
    return (UVariant*)res;
}
void UVariant::SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera"));
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
void UVariant::SwitchOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SwitchOn"));
    struct Params_SwitchOn {
    }; // Size: 0x0
    Params_SwitchOn params{};
    ProcessEvent(func, &params);
}
bool UVariant::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UVariant::SetThumbnailFromTexture(UTexture2D* NewThumbnail) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture"));
    struct Params_SetThumbnailFromTexture {
        UTexture2D* NewThumbnail; // 0x0
    }; // Size: 0x8
    Params_SetThumbnailFromTexture params{};
    params.NewThumbnail = (UTexture2D*)NewThumbnail;
    ProcessEvent(func, &params);
}
void UVariant::SetThumbnailFromFile(FString FilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile"));
    struct Params_SetThumbnailFromFile {
        FString FilePath; // 0x0
    }; // Size: 0x10
    Params_SetThumbnailFromFile params{};
    params.FilePath = (FString)FilePath;
    ProcessEvent(func, &params);
}
void UVariant::SetThumbnailFromEditorViewport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport"));
    struct Params_SetThumbnailFromEditorViewport {
    }; // Size: 0x0
    Params_SetThumbnailFromEditorViewport params{};
    ProcessEvent(func, &params);
}
void UVariant::SetDisplayText() {}
void UVariant::SetDependency(int32_t Index, FVariantDependency& Dependency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.SetDependency"));
    struct Params_SetDependency {
        int32_t Index; // 0x0
        char pad_4[0x4];
        FVariantDependency Dependency; // 0x8
    }; // Size: 0x60
    Params_SetDependency params{};
    params.Index = (int32_t)Index;
    params.Dependency = (FVariantDependency)Dependency;
    ProcessEvent(func, &params);
    Dependency = params.Dependency;
}
UTexture2D* UVariant::GetThumbnail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetThumbnail"));
    struct Params_GetThumbnail {
        UTexture2D* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetThumbnail params{};
    ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
UVariantSet* UVariant::GetParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetParent"));
    struct Params_GetParent {
        UVariantSet* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParent params{};
    ProcessEvent(func, &params);
    return (UVariantSet*)params.ReturnValue;
}
int32_t UVariant::GetNumDependencies() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetNumDependencies"));
    struct Params_GetNumDependencies {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumDependencies params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UVariant::GetNumActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetNumActors"));
    struct Params_GetNumActors {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumActors params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UVariant::GetDisplayText() {}
TArray<UVariant*> UVariant::GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetDependents"));
    struct Params_GetDependents {
        ULevelVariantSets* LevelVariantSets; // 0x0
        bool bOnlyEnabledDependencies; // 0x8
        char pad_9[0x7];
        TArray<UVariant*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetDependents params{};
    params.LevelVariantSets = (ULevelVariantSets*)LevelVariantSets;
    params.bOnlyEnabledDependencies = (bool)bOnlyEnabledDependencies;
    ProcessEvent(func, &params);
    return (TArray<UVariant*>)params.ReturnValue;
}
FVariantDependency UVariant::GetDependency(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.GetDependency"));
    struct Params_GetDependency {
        int32_t Index; // 0x0
        char pad_4[0x4];
        FVariantDependency ReturnValue; // 0x8
    }; // Size: 0x60
    Params_GetDependency params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (FVariantDependency)params.ReturnValue;
}
void UVariant::DeleteDependency(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.DeleteDependency"));
    struct Params_DeleteDependency {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_DeleteDependency params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
int32_t UVariant::AddDependency(FVariantDependency& Dependency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.Variant.AddDependency"));
    struct Params_AddDependency {
        FVariantDependency Dependency; // 0x0
        int32_t ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_AddDependency params{};
    params.Dependency = (FVariantDependency)Dependency;
    ProcessEvent(func, &params);
    Dependency = params.Dependency;
    return (int32_t)params.ReturnValue;
}
