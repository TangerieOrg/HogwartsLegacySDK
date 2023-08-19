#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UHealthSnapshotBlueprintLibrary* StaticClass();
    static void StopPerformanceSnapshots();
    static void StartPerformanceSnapshots();
    static void LogPerformanceSnapshot(FString SnapshotTitle, bool bResetStats);
}; // Size: 0x28
#pragma pack(pop)
