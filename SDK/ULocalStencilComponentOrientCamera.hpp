#pragma once
#include <cstdint>
#include "ULocalStencilComponent.hpp"
#pragma pack(push, 1)
class ULocalStencilComponentOrientCamera : public ULocalStencilComponent {
public:
    float MeshNearClipTweak; // 0x340
    char pad_344[0xc];
    static ULocalStencilComponentOrientCamera* StaticClass();
}; // Size: 0x350
#pragma pack(pop)
