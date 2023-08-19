#pragma once
#include <cstdint>
#include "UCurveHelpersUnitTest.hpp"
#pragma pack(push, 1)
class UCurveHelpersFilterUnitTest : public UCurveHelpersUnitTest {
public:
    float TimeConstant; // 0xd8
    float Speed; // 0xdc
    float SolveTolerance; // 0xe0
    char pad_e4[0x4];
    static UCurveHelpersFilterUnitTest* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
