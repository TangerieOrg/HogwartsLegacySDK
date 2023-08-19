#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FObjectTrackerData {
    FString AssetType; // 0x0
    TArray<AActor*> ChildObjects; // 0x10
}; // Size: 0x20
#pragma pack(pop)
