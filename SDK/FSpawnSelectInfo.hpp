#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSpawnSelectInfo {
    FString ObjectType; // 0x0
    FString ObjectToSpawn; // 0x10
    TArray<FString> AllowedObjectTypeList; // 0x20
    TArray<FString> FilteredObjectList; // 0x30
    char pad_40[0x24];
    int32_t MyIndex; // 0x64
    bool bIsIndexed; // 0x68
    bool bIsRedirected; // 0x69
    bool bIsExpanded; // 0x6a
    char pad_6b[0x5];
    FString GroupName; // 0x70
}; // Size: 0x80
#pragma pack(pop)
