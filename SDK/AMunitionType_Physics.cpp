#include "AMunitionType_Base.hpp"
#include "AMunitionType_Physics.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UMaterialInterface.hpp"
#include "UParticleSystem.hpp"
AMunitionType_Physics* AMunitionType_Physics::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_Physics");
    return (AMunitionType_Physics*)res;
}
