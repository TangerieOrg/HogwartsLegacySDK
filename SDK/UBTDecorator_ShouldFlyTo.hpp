#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_ShouldFlyTo : public UBTDecorator {
public:
    FBlackboardKeySelector TargetKey; // 0x68
    static UBTDecorator_ShouldFlyTo* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
