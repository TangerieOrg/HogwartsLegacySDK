#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCinematicBatch;
class UCinematicBatchHUD;
#pragma pack(push, 1)
class UPlaySceneRigCinematic : public UObject {
public:
    char pad_28[0x48];
    UCinematicBatch* CurrentCinematicBatch; // 0x70
    UCinematicBatchHUD* CurrentCinematicBatchHUD; // 0x78
    char pad_80[0x168];
    TArray<UCinematicBatch*> CinematicBatches; // 0x1e8
    static UPlaySceneRigCinematic* StaticClass();
    void PlayAllCinematicBatchJobs(TArray<FString> InCinematicBatchPaths);
}; // Size: 0x1f8
#pragma pack(pop)
