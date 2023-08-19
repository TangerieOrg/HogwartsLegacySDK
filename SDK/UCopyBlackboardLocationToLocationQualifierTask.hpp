#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCopyBlackboardLocationToLocationQualifierTask : public UQualifierTask {
public:
    FBlackboardKeySelector FromLocationKey; // 0x28
    FBlackboardKeySelector ToLocationKey; // 0x50
    static UCopyBlackboardLocationToLocationQualifierTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
