#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class ULightClippingComponent : public USceneComponent {
public:
    char pad_220[0x10];
    static ULightClippingComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
