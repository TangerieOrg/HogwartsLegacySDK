#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationStaticMesh.hpp"
UParticleModuleLocationStaticMesh* UParticleModuleLocationStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ParticleModuleLocationStaticMesh");
    return (UParticleModuleLocationStaticMesh*)res;
}
