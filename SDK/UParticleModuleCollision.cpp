#include "EObjectTypeQuery.hpp"
#include "EParticleCollisionComplete.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleCollision.hpp"
#include "UParticleModuleCollisionBase.hpp"
UParticleModuleCollision* UParticleModuleCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleCollision");
    return (UParticleModuleCollision*)res;
}
