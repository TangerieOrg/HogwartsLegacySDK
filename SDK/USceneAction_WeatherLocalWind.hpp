#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherLocalWind : public USceneRigActionBase {
public:
    float BlendInTime; // 0x88
    float BlendOutTime; // 0x8c
    FBlendDomain BlendDomain; // 0x90
    float Priority; // 0xc8
    char pad_cc[0x4];
    static USceneAction_WeatherLocalWind* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
