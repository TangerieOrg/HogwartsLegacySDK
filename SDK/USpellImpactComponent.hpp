#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class AActor;
struct FMunitionImpactData;
#pragma pack(push, 1)
class USpellImpactComponent : public UActorComponent {
public:
    static USpellImpactComponent* StaticClass();
    void OnSpellImpact(AActor* Target, FMunitionImpactData& MunitionImpactData);
}; // Size: 0xc8
#pragma pack(pop)
