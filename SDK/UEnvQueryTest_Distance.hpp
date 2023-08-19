#pragma once
#include <cstdint>
#include "EEnvTestDistance\Type.hpp"
#include "UEnvQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Distance : public UEnvQueryTest {
public:
    EEnvTestDistance::Type TestMode; // 0x1f8
    char pad_1f9[0x7];
    UClass* DistanceTo; // 0x200
    static UEnvQueryTest_Distance* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
