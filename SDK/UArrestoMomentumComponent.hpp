#pragma once
#include <cstdint>
#include "FArrestoData.hpp"
#include "UStateEffectComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UArrestoMomentumComponent : public UStateEffectComponent {
public:
    char pad_190[0x28];
    FArrestoData ArrestoData; // 0x1b8
    char pad_1f8[0x10];
    static UArrestoMomentumComponent* StaticClass();
    void OnBroken(AActor* Actor);
}; // Size: 0x208
#pragma pack(pop)
