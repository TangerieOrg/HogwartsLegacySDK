#include "ELocationBoneSocketSelectionMethod.hpp"
#include "ELocationBoneSocketSource.hpp"
#include "FLocationBoneSocketInfo.hpp"
#include "FVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationBoneSocket.hpp"
UParticleModuleLocationBoneSocket* UParticleModuleLocationBoneSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationBoneSocket");
    return (UParticleModuleLocationBoneSocket*)res;
}
