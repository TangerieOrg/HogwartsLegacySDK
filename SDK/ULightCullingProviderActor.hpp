#pragma once
#include <cstdint>
#include "ULightCullingProvider.hpp"
class ALight;
#pragma pack(push, 1)
class ULightCullingProviderActor : public ULightCullingProvider {
public:
    ALight* LightActor; // 0x28
    static ULightCullingProviderActor* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
