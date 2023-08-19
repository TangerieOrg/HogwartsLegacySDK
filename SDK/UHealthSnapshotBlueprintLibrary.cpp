#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UHealthSnapshotBlueprintLibrary.hpp"
UHealthSnapshotBlueprintLibrary* UHealthSnapshotBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HealthSnapshotBlueprintLibrary");
    return (UHealthSnapshotBlueprintLibrary*)res;
}
void UHealthSnapshotBlueprintLibrary::StopPerformanceSnapshots() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HealthSnapshotBlueprintLibrary.StopPerformanceSnapshots"));
    struct Params_StopPerformanceSnapshots {
    }; // Size: 0x0
    Params_StopPerformanceSnapshots params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHealthSnapshotBlueprintLibrary::StartPerformanceSnapshots() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HealthSnapshotBlueprintLibrary.StartPerformanceSnapshots"));
    struct Params_StartPerformanceSnapshots {
    }; // Size: 0x0
    Params_StartPerformanceSnapshots params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(FString SnapshotTitle, bool bResetStats) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HealthSnapshotBlueprintLibrary.LogPerformanceSnapshot"));
    struct Params_LogPerformanceSnapshot {
        FString SnapshotTitle; // 0x0
        bool bResetStats; // 0x10
    }; // Size: 0x11
    Params_LogPerformanceSnapshot params{};
    params.SnapshotTitle = (FString)SnapshotTitle;
    params.bResetStats = (bool)bResetStats;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
