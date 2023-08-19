#pragma once
#include <cstdint>
#include "FOdcPathSpec.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UOdcEnvQueryTest_SphereFit : public UEnvQueryTest {
public:
    float Radius; // 0x1f8
    bool bCustomPathSpec; // 0x1fc
    char pad_1fd[0x3];
    FOdcPathSpec CustomPathSpec; // 0x200
    static UOdcEnvQueryTest_SphereFit* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
