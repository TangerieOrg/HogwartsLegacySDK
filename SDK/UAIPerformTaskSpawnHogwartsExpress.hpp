#pragma once
#include <cstdint>
#include "EPerformTaskHogwarsExpressSettings.hpp"
#include "FVector.hpp"
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskSpawnHogwartsExpress : public UAIPerformTaskBase {
public:
    char pad_e0[0x8];
    bool bUpdateSpeed; // 0xe8
    char pad_e9[0x3];
    float NewSpeed; // 0xec
    char pad_f0[0x10];
    static UAIPerformTaskSpawnHogwartsExpress* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
