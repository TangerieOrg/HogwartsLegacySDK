#pragma once
#include <cstdint>
#include "EKnowledgeLevel.hpp"
#include "FFactInformation.hpp"
#pragma pack(push, 1)
struct FFactSheetResult {
    FName RegistryId; // 0x0
    FName HouseID; // 0x8
    FName FlavorID; // 0x10
    FName FactSheetType; // 0x18
    EKnowledgeLevel SubjectKnowledgeLevel; // 0x20
    char pad_21[0x3];
    float SubjectKnowledgeLevelAmount; // 0x24
    TArray<FFactInformation> Facts; // 0x28
}; // Size: 0x38
#pragma pack(pop)
