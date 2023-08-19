#pragma once
#include <cstdint>
#include "ULightClippingProvider.hpp"
class ALightClippingPlanes;
#pragma pack(push, 1)
class ULightClippingProviderActor : public ULightClippingProvider {
public:
    ALightClippingPlanes* Actor; // 0x28
    bool bInvertPlanes; // 0x30
    char pad_31[0x7];
    static ULightClippingProviderActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
