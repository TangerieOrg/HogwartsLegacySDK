#pragma once
#include <cstdint>
#include "ULakeParameterGenerator.hpp"
#pragma pack(push, 1)
class ULakeParameterManualGenerator : public ULakeParameterGenerator {
public:
    float OverallWeight; // 0x60
    int32_t ComponentsPerOctave; // 0x64
    float WaveDirectionVariance; // 0x68
    bool bEnable000025; // 0x6c
    char pad_6d[0x3];
    float Power000025; // 0x70
    bool bEnable000050; // 0x74
    char pad_75[0x3];
    float Power000050; // 0x78
    bool bEnable000100; // 0x7c
    char pad_7d[0x3];
    float Power000100; // 0x80
    bool bEnable000200; // 0x84
    char pad_85[0x3];
    float Power000200; // 0x88
    bool bEnable000400; // 0x8c
    char pad_8d[0x3];
    float Power000400; // 0x90
    bool bEnable000800; // 0x94
    char pad_95[0x3];
    float Power000800; // 0x98
    bool bEnable001600; // 0x9c
    char pad_9d[0x3];
    float Power001600; // 0xa0
    bool bEnable003200; // 0xa4
    char pad_a5[0x3];
    float Power003200; // 0xa8
    bool bEnable006400; // 0xac
    char pad_ad[0x3];
    float Power006400; // 0xb0
    bool bEnable012800; // 0xb4
    char pad_b5[0x3];
    float Power012800; // 0xb8
    bool bEnable025600; // 0xbc
    char pad_bd[0x3];
    float Power025600; // 0xc0
    bool bEnable051200; // 0xc4
    char pad_c5[0x3];
    float Power051200; // 0xc8
    char pad_cc[0x4];
    static ULakeParameterManualGenerator* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
