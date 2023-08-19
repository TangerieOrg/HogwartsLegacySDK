#pragma once
#include <cstdint>
#include "FDeflectionData.hpp"
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class UDeflectionComponent : public UStateEffectComponent {
public:
    FDeflectionData Data; // 0x190
    char pad_1a8[0x28];
    static UDeflectionComponent* StaticClass();
    void SetupDelegate();
}; // Size: 0x1d0
#pragma pack(pop)
