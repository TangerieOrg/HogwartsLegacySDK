#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_Adaptation : public USceneRigActionBase {
public:
    float FeatherInTime; // 0x88
    float FeatherOutTime; // 0x8c
    float Priority; // 0x90
    bool bHighestPossiblePriority; // 0x94
    bool bEnabled; // 0x95
    char pad_96[0x2];
    static USceneAction_Adaptation* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
