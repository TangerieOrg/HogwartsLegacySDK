#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UStaticMesh;
#pragma pack(push, 1)
class UFoliageStatistics : public UBlueprintFunctionLibrary {
public:
    static UFoliageStatistics* StaticClass();
    static int32_t FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    static int32_t FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FBox Box);
}; // Size: 0x28
#pragma pack(pop)
