#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UEQSRenderingComponent : public UPrimitiveComponent {
public:
    char pad_480[0x40];
    static UEQSRenderingComponent* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
