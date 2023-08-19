#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCopySelfActorLocationToBlackboardQualifierTask : public UQualifierTask {
public:
    FBlackboardKeySelector OutputLocationKey; // 0x28
    static UCopySelfActorLocationToBlackboardQualifierTask* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
