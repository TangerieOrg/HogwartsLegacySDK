#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavLocalGridManager : public UObject {
public:
    char pad_28[0x30];
    static UNavLocalGridManager* StaticClass();
    static bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);
    static void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);
    static bool FindLocalNavigationGridPath(UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints);
    static int32_t AddLocalNavigationGridForPoints(UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids);
    static int32_t AddLocalNavigationGridForPoint(UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);
    static int32_t AddLocalNavigationGridForCapsule(UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);
    static int32_t AddLocalNavigationGridForBox(UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
}; // Size: 0x58
#pragma pack(pop)
