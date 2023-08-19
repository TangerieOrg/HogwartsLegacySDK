#pragma once
#include <cstdint>
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Stations : public UEnvQueryTest {
public:
    bool bScoreInOrder; // 0x1f8
    char pad_1f9[0x7];
    static UEnvQueryTest_Stations* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
