#pragma once
#include <cstdint>
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UMercunaQueryTest : public UEnvQueryTest {
public:
    static UMercunaQueryTest* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)
