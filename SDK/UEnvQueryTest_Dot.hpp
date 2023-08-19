#pragma once
#include <cstdint>
#include "EEnvTestDot.hpp"
#include "FEnvDirection.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Dot : public UEnvQueryTest {
public:
    FEnvDirection LineA; // 0x1f8
    FEnvDirection LineB; // 0x218
    EEnvTestDot TestMode; // 0x238
    bool bAbsoluteValue; // 0x239
    char pad_23a[0x6];
    static UEnvQueryTest_Dot* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
