#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UAkAcousticTextureSetComponent : public USceneComponent {
public:
    char pad_220[0x10];
    static UAkAcousticTextureSetComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
