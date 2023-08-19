#include "ASpawnLocation.hpp"
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FSpawnProperties.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTextRenderComponent.hpp"
ASpawnLocation* ASpawnLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/DesignerHelper.SpawnLocation");
    return (ASpawnLocation*)res;
}
void ASpawnLocation::CacheVolumeBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.CacheVolumeBounds"));
    struct Params_CacheVolumeBounds {
    }; // Size: 0x0
    Params_CacheVolumeBounds params{};
    ProcessEvent(func, &params);
}
void ASpawnLocation::StopSpawning(FName& GroupIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.StopSpawning"));
    struct Params_StopSpawning {
        FName GroupIn; // 0x0
    }; // Size: 0x8
    Params_StopSpawning params{};
    params.GroupIn = (FName)GroupIn;
    ProcessEvent(func, &params);
    GroupIn = params.GroupIn;
}
void ASpawnLocation::StartSpawningUsingProbability(FSpawnProperties& SpawnProperiesIn, FName& GroupIn, float& SpawnProbability, int32_t& NumActorsPerClassIn, int32_t InFirstActorGroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.StartSpawningUsingProbability"));
    struct Params_StartSpawningUsingProbability {
        FSpawnProperties SpawnProperiesIn; // 0x0
        FName GroupIn; // 0x38
        float SpawnProbability; // 0x40
        int32_t NumActorsPerClassIn; // 0x44
        int32_t InFirstActorGroupIndex; // 0x48
    }; // Size: 0x4c
    Params_StartSpawningUsingProbability params{};
    params.SpawnProperiesIn = (FSpawnProperties)SpawnProperiesIn;
    params.GroupIn = (FName)GroupIn;
    params.SpawnProbability = (float)SpawnProbability;
    params.NumActorsPerClassIn = (int32_t)NumActorsPerClassIn;
    params.InFirstActorGroupIndex = (int32_t)InFirstActorGroupIndex;
    ProcessEvent(func, &params);
    SpawnProperiesIn = params.SpawnProperiesIn;
    GroupIn = params.GroupIn;
    SpawnProbability = params.SpawnProbability;
    NumActorsPerClassIn = params.NumActorsPerClassIn;
}
void ASpawnLocation::StartSpawning(FSpawnProperties& SpawnProperiesIn, FName& GroupIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.StartSpawning"));
    struct Params_StartSpawning {
        FSpawnProperties SpawnProperiesIn; // 0x0
        FName GroupIn; // 0x38
    }; // Size: 0x40
    Params_StartSpawning params{};
    params.SpawnProperiesIn = (FSpawnProperties)SpawnProperiesIn;
    params.GroupIn = (FName)GroupIn;
    ProcessEvent(func, &params);
    SpawnProperiesIn = params.SpawnProperiesIn;
    GroupIn = params.GroupIn;
}
void ASpawnLocation::InitScatterGrid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.InitScatterGrid"));
    struct Params_InitScatterGrid {
    }; // Size: 0x0
    Params_InitScatterGrid params{};
    ProcessEvent(func, &params);
}
void ASpawnLocation::SetSpawnCategorySelection(FString InSpawnCatType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.SetSpawnCategorySelection"));
    struct Params_SetSpawnCategorySelection {
        FString InSpawnCatType; // 0x0
    }; // Size: 0x10
    Params_SetSpawnCategorySelection params{};
    params.InSpawnCatType = (FString)InSpawnCatType;
    ProcessEvent(func, &params);
}
bool ASpawnLocation::IsSpawning(FName& GroupIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnLocation.IsSpawning"));
    struct Params_IsSpawning {
        FName GroupIn; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSpawning params{};
    params.GroupIn = (FName)GroupIn;
    ProcessEvent(func, &params);
    GroupIn = params.GroupIn;
    return (bool)params.ReturnValue;
}
