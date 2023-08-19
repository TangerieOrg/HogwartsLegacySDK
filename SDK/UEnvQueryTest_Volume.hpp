#pragma once
#include <cstdint>
#include "UEnvQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Volume : public UEnvQueryTest {
public:
    UClass* VolumeContext; // 0x1f8
    UClass* VolumeClass; // 0x200
    uint8_t bDoComplexVolumeTest : 1; // 0x208
    uint8_t pad_bitfield_208_1 : 7;
    char pad_209[0x7];
    static UEnvQueryTest_Volume* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
