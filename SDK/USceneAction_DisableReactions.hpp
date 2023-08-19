#pragma once
#include <cstdint>
#include "ECharacterShutdownPriority.hpp"
#include "EStandardManagedPriority.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_DisableReactions : public USceneRigObjectActionBase {
public:
    EStandardManagedPriority Priority; // 0xa0
    ECharacterShutdownPriority PriorityNew; // 0xa1
    char pad_a2[0x6];
    static USceneAction_DisableReactions* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
