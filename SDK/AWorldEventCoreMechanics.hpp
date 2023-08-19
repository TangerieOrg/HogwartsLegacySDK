#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EProductionStatus.hpp"
#include "FGameplayTag.hpp"
#include "FVector.hpp"
class AWorldEventLocationActor;
struct FWorldEventDataRow;
struct FRotator;
#pragma pack(push, 1)
class AWorldEventCoreMechanics : public AActor {
public:
    AWorldEventLocationActor* GeneralLocationActor; // 0x248
    AActor* TeleportLocationActor; // 0x250
    int32_t ProductionStatusMask; // 0x258
    char pad_25c[0x14];
    static AWorldEventCoreMechanics* StaticClass();
    void ToggleMaskValue(EProductionStatus Status);
    TArray<FName> SortAlphabetically(TArray<FName> unsortedArray);
    void SetTag(FGameplayTag Tag);
    bool RowMatchesProductionFilter(FWorldEventDataRow& Row);
    void OnWorldEventLoaded(AWorldEventLocationActor* Location, FWorldEventDataRow& Row);
    void OnPreviewLevelLoaded();
    void OnPlayerReturned();
    bool MaskMatchesFilter(EProductionStatus Status);
    void LoadAndTeleport(FName weName);
    void GetPositionAndRotation(int32_t Index, int32_t Count, AActor* StartLocation, int32_t rowLength, FVector axisAlignment, FVector& OutPosition, FRotator& OutRotation, int32_t Width);
    TArray<FGameplayTag> GetLocationTags();
}; // Size: 0x270
#pragma pack(pop)
