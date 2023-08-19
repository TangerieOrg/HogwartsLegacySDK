#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UBodySetup;
#pragma pack(push, 1)
class UModelComponent : public UPrimitiveComponent {
public:
    char pad_480[0x18];
    UBodySetup* ModelBodySetup; // 0x498
    char pad_4a0[0x20];
    static UModelComponent* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
