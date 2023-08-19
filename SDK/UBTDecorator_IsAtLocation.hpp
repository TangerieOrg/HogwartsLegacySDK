#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDistanceType.hpp"
#include "UBTDecorator_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {
public:
    float AcceptableRadius; // 0x90
    char pad_94[0x4];
    FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
    FAIDistanceType GeometricDistanceType; // 0xd0
    char pad_d1[0x3];
    uint8_t bUseParametrizedRadius : 1; // 0xd4
    uint8_t bUseNavAgentGoalLocation : 1; // 0xd4
    uint8_t bPathFindingBasedTest : 1; // 0xd4
    uint8_t pad_bitfield_d4_3 : 5;
    char pad_d5[0x3];
    static UBTDecorator_IsAtLocation* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
