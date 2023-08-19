#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FKnowledgeInfo {
    FString ObjectGroup; // 0x0
    TArray<FString> AllowedObjectGroupList; // 0x10
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
