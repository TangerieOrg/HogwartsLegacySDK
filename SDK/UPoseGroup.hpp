#pragma once
#include <cstdint>
#include "FConversationExplicitPoseGroupReference.hpp"
#include "FPoseGroupTransition.hpp"
#include "UObject.hpp"
class UBaseArchitectAsset;
#pragma pack(push, 1)
class UPoseGroup : public UObject {
public:
    UBaseArchitectAsset* LookUp; // 0x28
    TArray<FPoseGroupTransition> TransitionsTo; // 0x30
    float MinDurationSeconds; // 0x40
    float MaxDurationSeconds; // 0x44
    FConversationExplicitPoseGroupReference ExplicitPoseGroupName; // 0x48
    static UPoseGroup* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
