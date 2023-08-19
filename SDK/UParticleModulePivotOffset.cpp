#include "FVector2D.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModulePivotOffset.hpp"
UParticleModulePivotOffset* UParticleModulePivotOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModulePivotOffset");
    return (UParticleModulePivotOffset*)res;
}
