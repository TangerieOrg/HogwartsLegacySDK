#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
class UArrestoMomentumComponent;
#pragma pack(push, 1)
class UArrestoMomentumInterface : public UInterface {
public:
    static UArrestoMomentumInterface* StaticClass();
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    bool DisallowArrestoMomentum();
}; // Size: 0x28
#pragma pack(pop)
