#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UPortraitCallOutAttachComponent : public USceneComponent {
public:
    char pad_220[0x10];
    static UPortraitCallOutAttachComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
