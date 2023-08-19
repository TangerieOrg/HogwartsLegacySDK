#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UObject.hpp"
class UEdGraphNode;
#pragma pack(push, 1)
class UPoseWatch : public UObject {
public:
    UEdGraphNode* Node; // 0x28
    FColor PoseWatchColour; // 0x30
    char pad_34[0x4];
    static UPoseWatch* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
