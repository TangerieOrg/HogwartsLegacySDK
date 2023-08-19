#include "ESpringMode.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleAttractorBase.hpp"
#include "UParticleModuleAttractorSpring.hpp"
UParticleModuleAttractorSpring* UParticleModuleAttractorSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAttractorSpring");
    return (UParticleModuleAttractorSpring*)res;
}
