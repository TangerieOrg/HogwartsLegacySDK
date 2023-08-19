#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UOdcRepulsorComponent : public USceneComponent {
public:
    float RepulsorInnerCushion; // 0x220
    char pad_224[0xc];
    static UOdcRepulsorComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
