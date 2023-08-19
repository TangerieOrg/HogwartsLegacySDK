#pragma once
#include <cstdint>
#include "ESceneDepthPriorityGroup.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsDepthPriorityGroup : public USpawnByPrimitiveOptions {
public:
    ESceneDepthPriorityGroup DepthPriorityGroup; // 0x28
    ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x29
    bool bUseViewOwnerDepthPriorityGroup; // 0x2a
    char pad_2b[0x5];
    static USpawnByPrimitiveOptionsDepthPriorityGroup* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
