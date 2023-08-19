#pragma once
#include <cstdint>
#include "FLODViewerInfos.hpp"
#include "UObject.hpp"
class USkeletalMeshComponent;
class USkeletalMesh;
struct FVector;
class UPhoenixSignificanceManager;
#pragma pack(push, 1)
class ULODViewerManager : public UObject {
public:
    static ULODViewerManager* StaticClass();
    static TArray<FString> PopulateListOfSkeletalMeshes();
    static int32_t GetSkeletalMeshPredictedLODLevel(USkeletalMeshComponent* SkeletalMeshComponent);
    static FName GetObjectPathByString(FString AssetName);
    static int32_t GetNumLODsForViewer(USkeletalMesh* SkeletalMesh);
    static TArray<FLODViewerInfos> GetLODInfoFromSkeletalMesh(USkeletalMesh* SkeletalMesh);
    static float ComputeScreenRadius(FVector& Origin, float Radius, FVector& ViewOrigin, UPhoenixSignificanceManager* SigManager);
    static float ComputePixelsOnScreen(float ScreenDiameter, float ResolutionMax);
    static TArray<float> CalculateLODDistancesFromSphereRadius(TArray<float> LODScreenSizes, float Radius, UPhoenixSignificanceManager* SigManager);
}; // Size: 0x28
#pragma pack(pop)
