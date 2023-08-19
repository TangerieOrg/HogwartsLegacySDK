#pragma once
#include <cstdint>
#include "FDebugMapData.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UMapPath;
class APhoenixPathActor;
class UMapPathData;
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class UOverlandPathFinder : public UObject {
public:
    UMapPath* ClosestPathToStart; // 0x28
    UMapPath* ClosestPathToEnd; // 0x30
    TArray<FVector> PathPoints; // 0x38
    float MaxSpliceDistance; // 0x48
    bool ShowUnknownRoads; // 0x4c
    char pad_4d[0x3];
    TArray<APhoenixPathActor*> MapPathActors; // 0x50
    FLinearColor Road50Color; // 0x60
    FLinearColor Road100Color; // 0x70
    FLinearColor Road200Color; // 0x80
    FLinearColor RoadUnknownColor; // 0x90
    FDebugMapData debugAStarSearchData; // 0xa0
    UMapPathData* AllRoads; // 0xf0
    UMapPathData* AllFlights; // 0xf8
    char pad_100[0x68];
    TArray<ULevelStreamingDynamic*> StreamingLevels; // 0x168
    char pad_178[0x10];
    static UOverlandPathFinder* StaticClass();
    void RoadSplineTileLoadedCallback();
    void MapCreateRoadSplineData();
    TArray<FVector> GetPath();
}; // Size: 0x188
#pragma pack(pop)
