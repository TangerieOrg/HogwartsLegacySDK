#pragma once
#include <cstdint>
#include "FEnvOverlapData.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Overlap : public UEnvQueryTest {
public:
    FEnvOverlapData OverlapData; // 0x1f8
    static UEnvQueryTest_Overlap* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
