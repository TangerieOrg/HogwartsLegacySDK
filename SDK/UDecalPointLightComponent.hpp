#pragma once
#include <cstdint>
#include "FDecalPointLightInfo.hpp"
#include "UDecalPointLightComponentBase.hpp"
#pragma pack(push, 1)
class UDecalPointLightComponent : public UDecalPointLightComponentBase {
public:
    char pad_330[0x20];
    static UDecalPointLightComponent* StaticClass();
    void SetDecalPointLightInfo(FDecalPointLightInfo NewInfo);
}; // Size: 0x350
#pragma pack(pop)
