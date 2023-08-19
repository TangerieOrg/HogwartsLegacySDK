#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_ReportDebugError : public UBTTaskNode {
public:
    FString ErrorText; // 0x70
    bool bPersistent; // 0x80
    char pad_81[0x3];
    float LifeTime; // 0x84
    bool bRemoveExistingPersistentErrors; // 0x88
    char pad_89[0x7];
    static UBTTask_Creature_ReportDebugError* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
