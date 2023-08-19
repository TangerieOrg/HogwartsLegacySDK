#pragma once
#include <cstdint>
#include "EKnowledgeLevel.hpp"
#pragma pack(push, 1)
struct FFactInformation {
    FName FactName; // 0x0
    FString FactType; // 0x8
    FString FactCategory; // 0x18
    bool HasFactSheet; // 0x28
    EKnowledgeLevel CurrentKnowledgeLevel; // 0x29
    EKnowledgeLevel NeededKnowledgeLevel; // 0x2a
    bool SecretFactLocked; // 0x2b
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
