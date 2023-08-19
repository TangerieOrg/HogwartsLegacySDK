#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EConjurationSpawnState.hpp"
#pragma pack(push, 1)
class AConjurationPreviewEffect : public AActor {
public:
    float SpawnTimeLimit; // 0x248
    char pad_24c[0x4];
    AActor* TargetPreviewActor; // 0x250
    EConjurationSpawnState SpawnState; // 0x258
    char pad_259[0x7];
    static AConjurationPreviewEffect* StaticClass();
    void UpdateFXBlueprint(float DeltaTime);
    void OnEndSpawnOutBlueprint();
    void OnEndSpawnInBlueprint();
    void OnEndSpawnedBlueprint();
    void OnBeginSpawnOutBlueprint();
    void OnBeginSpawnInBlueprint();
    void OnBeginSpawnedBlueprint();
    void InitializeBlueprint();
    float GetSpawnPercent();
}; // Size: 0x260
#pragma pack(pop)
