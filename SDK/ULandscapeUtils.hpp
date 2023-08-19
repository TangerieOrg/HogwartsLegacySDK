#pragma once
#include <cstdint>
#include "FLayerInfoWeight.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULandscapeHeightfieldCollisionComponent;
class UPhysicalMaterial;
#pragma pack(push, 1)
class ULandscapeUtils : public UBlueprintFunctionLibrary {
public:
    static ULandscapeUtils* StaticClass();
    static void LogLandscapeComponentLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent);
    static TArray<FLayerInfoWeight> LineTraceForLayerInfoWeight(FVector Start, FVector End);
    static float GetWetnessFromLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent, FVector& InLocation, TArray<FString>& InWetnessLayerInfoNames, UPhysicalMaterial*& OutPhysMaterial);
    static TArray<FLayerInfoWeight> GetLandscapeComponentLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent);
    static void ClearLandscapeComponentLayerInfoData();
}; // Size: 0x28
#pragma pack(pop)
