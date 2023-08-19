#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCopyOptionActorChildLocationToBlackboardQualifierTask : public UQualifierTask {
public:
    FBlackboardKeySelector OutputLocationKey; // 0x28
    FString ChildName; // 0x50
    static UCopyOptionActorChildLocationToBlackboardQualifierTask* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
