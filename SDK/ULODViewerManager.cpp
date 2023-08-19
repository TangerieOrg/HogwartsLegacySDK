#include "FLODViewerInfos.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULODViewerManager.hpp"
#include "UObject.hpp"
#include "UPhoenixSignificanceManager.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
TArray<float> ULODViewerManager::CalculateLODDistancesFromSphereRadius(TArray<float> LODScreenSizes, float Radius, UPhoenixSignificanceManager* SigManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.CalculateLODDistancesFromSphereRadius"));
    struct Params_CalculateLODDistancesFromSphereRadius {
        TArray<float> LODScreenSizes; // 0x0
        float Radius; // 0x10
        char pad_14[0x4];
        UPhoenixSignificanceManager* SigManager; // 0x18
        TArray<float> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_CalculateLODDistancesFromSphereRadius params{};
    params.LODScreenSizes = (TArray<float>)LODScreenSizes;
    params.Radius = (float)Radius;
    params.SigManager = (UPhoenixSignificanceManager*)SigManager;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
ULODViewerManager* ULODViewerManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LODViewerManager");
    return (ULODViewerManager*)res;
}
float ULODViewerManager::ComputePixelsOnScreen(float ScreenDiameter, float ResolutionMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.ComputePixelsOnScreen"));
    struct Params_ComputePixelsOnScreen {
        float ScreenDiameter; // 0x0
        float ResolutionMax; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_ComputePixelsOnScreen params{};
    params.ScreenDiameter = (float)ScreenDiameter;
    params.ResolutionMax = (float)ResolutionMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FString> ULODViewerManager::PopulateListOfSkeletalMeshes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.PopulateListOfSkeletalMeshes"));
    struct Params_PopulateListOfSkeletalMeshes {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_PopulateListOfSkeletalMeshes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
int32_t ULODViewerManager::GetSkeletalMeshPredictedLODLevel(USkeletalMeshComponent* SkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.GetSkeletalMeshPredictedLODLevel"));
    struct Params_GetSkeletalMeshPredictedLODLevel {
        USkeletalMeshComponent* SkeletalMeshComponent; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSkeletalMeshPredictedLODLevel params{};
    params.SkeletalMeshComponent = (USkeletalMeshComponent*)SkeletalMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName ULODViewerManager::GetObjectPathByString(FString AssetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.GetObjectPathByString"));
    struct Params_GetObjectPathByString {
        FString AssetName; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetObjectPathByString params{};
    params.AssetName = (FString)AssetName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t ULODViewerManager::GetNumLODsForViewer(USkeletalMesh* SkeletalMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.GetNumLODsForViewer"));
    struct Params_GetNumLODsForViewer {
        USkeletalMesh* SkeletalMesh; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetNumLODsForViewer params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FLODViewerInfos> ULODViewerManager::GetLODInfoFromSkeletalMesh(USkeletalMesh* SkeletalMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.GetLODInfoFromSkeletalMesh"));
    struct Params_GetLODInfoFromSkeletalMesh {
        USkeletalMesh* SkeletalMesh; // 0x0
        TArray<FLODViewerInfos> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetLODInfoFromSkeletalMesh params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLODViewerInfos>)params.ReturnValue;
}
float ULODViewerManager::ComputeScreenRadius(FVector& Origin, float Radius, FVector& ViewOrigin, UPhoenixSignificanceManager* SigManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODViewerManager.ComputeScreenRadius"));
    struct Params_ComputeScreenRadius {
        FVector Origin; // 0x0
        float Radius; // 0xc
        FVector ViewOrigin; // 0x10
        char pad_1c[0x4];
        UPhoenixSignificanceManager* SigManager; // 0x20
        float ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_ComputeScreenRadius params{};
    params.Origin = (FVector)Origin;
    params.Radius = (float)Radius;
    params.ViewOrigin = (FVector)ViewOrigin;
    params.SigManager = (UPhoenixSignificanceManager*)SigManager;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    ViewOrigin = params.ViewOrigin;
    return (float)params.ReturnValue;
}
