#pragma once
#include <cstdint>
#include "UCurveHelpersUnitTest.hpp"
#pragma pack(push, 1)
class UCurveHelpersSimpleUnitTest : public UCurveHelpersUnitTest {
public:
    float Start; // 0xd8
    float Duration; // 0xdc
    static UCurveHelpersSimpleUnitTest* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
