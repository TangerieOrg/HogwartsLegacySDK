#pragma once
#include <cstdint>
#include "ELakeToolVersion.hpp"
#include "FLakeParameters.hpp"
#include "UActorComponent.hpp"
class ULakeParameterGeneratorBase;
class UTexture;
#pragma pack(push, 1)
class ULakeComponent : public UActorComponent {
public:
    ULakeParameterGeneratorBase* ParametersGenerator; // 0xc8
    FLakeParameters Parameters; // 0xd0
    float LakeSize; // 0x110
    char pad_114[0x4];
    UTexture* TextureDirAndDistToCoast; // 0x118
    UTexture* TextureFlowAndWaterDepth; // 0x120
    ELakeToolVersion LakeToolVersion; // 0x128
    char pad_129[0x43];
    float OverallWeight; // 0x16c
    int32_t ComponentsPerOctave; // 0x170
    float WaveDirectionVariance; // 0x174
    bool bEnable000025; // 0x178
    char pad_179[0x3];
    float Power000025; // 0x17c
    bool bEnable000050; // 0x180
    char pad_181[0x3];
    float Power000050; // 0x184
    bool bEnable000100; // 0x188
    char pad_189[0x3];
    float Power000100; // 0x18c
    bool bEnable000200; // 0x190
    char pad_191[0x3];
    float Power000200; // 0x194
    bool bEnable000400; // 0x198
    char pad_199[0x3];
    float Power000400; // 0x19c
    bool bEnable000800; // 0x1a0
    char pad_1a1[0x3];
    float Power000800; // 0x1a4
    bool bEnable001600; // 0x1a8
    char pad_1a9[0x3];
    float Power001600; // 0x1ac
    bool bEnable003200; // 0x1b0
    char pad_1b1[0x3];
    float Power003200; // 0x1b4
    bool bEnable006400; // 0x1b8
    char pad_1b9[0x3];
    float Power006400; // 0x1bc
    bool bEnable012800; // 0x1c0
    char pad_1c1[0x3];
    float Power012800; // 0x1c4
    bool bEnable025600; // 0x1c8
    char pad_1c9[0x3];
    float Power025600; // 0x1cc
    bool bEnable051200; // 0x1d0
    char pad_1d1[0x3];
    float Power051200; // 0x1d4
    static ULakeComponent* StaticClass();
    void CreatePresetFromParameters();
}; // Size: 0x1d8
#pragma pack(pop)
