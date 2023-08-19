#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblLeavingNavMeshTaskCondition : public UAblTaskCondition {
public:
    float MinSpeed; // 0x28
    float Distance; // 0x2c
    float DotProductCheck; // 0x30
    bool bCheckForCollision; // 0x34
    char pad_35[0x3];
    static UAblLeavingNavMeshTaskCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
