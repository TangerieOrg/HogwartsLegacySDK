#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCopyOptionActorLocationToBlackboardQualifierTask : public UQualifierTask {
public:
    FBlackboardKeySelector OutputLocationKey; // 0x28
    static UCopyOptionActorLocationToBlackboardQualifierTask* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
