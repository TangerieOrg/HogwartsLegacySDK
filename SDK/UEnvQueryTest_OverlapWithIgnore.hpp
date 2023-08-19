#pragma once
#include <cstdint>
#include "FEnvOverlapData.hpp"
#include "UEnvQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_OverlapWithIgnore : public UEnvQueryTest {
public:
    FEnvOverlapData OverlapData; // 0x1f8
    UClass* IgnoreContext; // 0x218
    static UEnvQueryTest_OverlapWithIgnore* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
