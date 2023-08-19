#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_GameAiOptions : public USceneRigActionBase {
public:
    bool bOverrideAreCharactersInSceneTargetableByAi; // 0x88
    bool bAreCharactersInSceneTargetableByAi; // 0x89
    EStandardManagedPriority TargetableByAiPriority; // 0x8a
    bool bOverrideAreNpcsSuspended; // 0x8b
    bool bSuspendNpcs; // 0x8c
    char pad_8d[0x3];
    static USceneAction_GameAiOptions* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
