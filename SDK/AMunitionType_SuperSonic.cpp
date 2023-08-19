#include "AMunitionType_Base.hpp"
#include "AMunitionType_SuperSonic.hpp"
#include "UAkAudioEvent.hpp"
#include "UMaterialInterface.hpp"
#include "UParticleSystem.hpp"
AMunitionType_SuperSonic* AMunitionType_SuperSonic::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_SuperSonic");
    return (AMunitionType_SuperSonic*)res;
}
