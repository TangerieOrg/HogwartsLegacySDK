#pragma once
#include <cstdint>
#include "FEasingFunction.hpp"
#include "UCurveHelpersSimpleUnitTest.hpp"
#pragma pack(push, 1)
class UCurveHelpersEaseUnitTest : public UCurveHelpersSimpleUnitTest {
public:
    FEasingFunction Easing; // 0xe0
    char pad_ec[0x4];
    static UCurveHelpersEaseUnitTest* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
