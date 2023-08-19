#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_PostProcessingBase : public USceneRigActionBase {
public:
    float Priority; // 0x88
    bool bHighestPossiblePriority; // 0x8c
    char pad_8d[0x3];
    static USceneAction_PostProcessingBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
