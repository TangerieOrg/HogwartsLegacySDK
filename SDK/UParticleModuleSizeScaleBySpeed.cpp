#include "FVector2D.hpp"
#include "UParticleModuleSizeBase.hpp"
#include "UParticleModuleSizeScaleBySpeed.hpp"
UParticleModuleSizeScaleBySpeed* UParticleModuleSizeScaleBySpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSizeScaleBySpeed");
    return (UParticleModuleSizeScaleBySpeed*)res;
}
