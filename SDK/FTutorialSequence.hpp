#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FTutorialInfo.hpp"
#pragma pack(push, 1)
struct FTutorialSequence : public FTableRowBase {
    FName TutorialName; // 0x8
    TArray<FTutorialInfo> TutorialSequence; // 0x10
    FString CleanupMessage; // 0x20
    FString KnowledgeCategory; // 0x30
    FString KnowledgeUnlock; // 0x40
}; // Size: 0x50
#pragma pack(pop)
