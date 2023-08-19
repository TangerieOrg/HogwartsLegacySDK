#pragma once
#include <cstdint>
#include "FEnvTraceData.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Project : public UEnvQueryTest {
public:
    FEnvTraceData ProjectionData; // 0x1f8
    static UEnvQueryTest_Project* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
