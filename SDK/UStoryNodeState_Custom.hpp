#pragma once
#include <cstdint>
#include "UObject.hpp"
class AStoryGraphActor;
class UStoryNode_Custom;
#pragma pack(push, 1)
class UStoryNodeState_Custom : public UObject {
public:
    AStoryGraphActor* OwningActor; // 0x28
    UStoryNode_Custom* Definition; // 0x30
    static UStoryNodeState_Custom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
