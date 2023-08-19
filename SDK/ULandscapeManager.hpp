#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class URegionData;
class ULevelStreaming;
class ULevel;
#pragma pack(push, 1)
class ULandscapeManager : public UObject {
public:
    char pad_28[0xf8];
    TArray<URegionData*> OverlandRegionData; // 0x120
    char pad_130[0x140];
    static ULandscapeManager* StaticClass();
    void RemoveCriticalLevel(ULevelStreaming* InLevel);
    void PrepareMapCapture();
    void OnShow();
    void OnSaveGameLoad();
    void OnLoad();
    void OnGameToSave();
    bool IsReadyForMapCapture();
    bool IsLocationExploredRegion(FVector Location, float MapScale);
    bool IsLocationExploredFog(FVector Location, float MapScale);
    bool IsLoadedLevelCritical(ULevel* InLevel);
    bool IsLevelCritical(ULevelStreaming* InLevel);
    int32_t GetNumActiveLevelLoads(bool InCriticalOnly);
    FBox GetLandscapeWorldBounds();
    static ULandscapeManager* Get();
    void ForceLandscapeLODs();
    void DoMapCapture();
    void ClearCriticalLevels();
    void CleanupMapCapture();
    void AddCriticalLevel(ULevelStreaming* InLevel);
}; // Size: 0x270
#pragma pack(pop)
