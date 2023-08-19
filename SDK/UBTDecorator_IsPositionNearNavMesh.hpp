#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_IsPositionNearNavMesh : public UBTDecorator {
public:
    FBlackboardKeySelector LocationKey; // 0x68
    float MaxDistanceToNavMesh; // 0x90
    char pad_94[0x4];
    static UBTDecorator_IsPositionNearNavMesh* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
