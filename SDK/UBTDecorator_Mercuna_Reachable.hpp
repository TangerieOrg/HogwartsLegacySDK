#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_Mercuna_Reachable : public UBTDecorator {
public:
    FBlackboardKeySelector Source; // 0x68
    FBlackboardKeySelector Destination; // 0x90
    float MaxPathLength; // 0xb8
    char pad_bc[0x4];
    static UBTDecorator_Mercuna_Reachable* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
