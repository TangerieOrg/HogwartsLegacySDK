#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCopyOptionActorToBlackboardQualifierTask : public UQualifierTask {
public:
    FBlackboardKeySelector OutputActorKey; // 0x28
    static UCopyOptionActorToBlackboardQualifierTask* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
