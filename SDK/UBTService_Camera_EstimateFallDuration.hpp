#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Camera_EstimateFallDuration : public UBTService {
public:
    float MaxFallDuration; // 0x70
    char pad_74[0x4];
    FBlackboardKeySelector EstimatedFallDurationKey; // 0x78
    FBlackboardKeySelector TotalFallDurationKey; // 0xa0
    static UBTService_Camera_EstimateFallDuration* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
