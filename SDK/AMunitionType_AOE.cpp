#include "AMunitionType_AOE.hpp"
#include "AMunitionType_Base.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UParticleSystem.hpp"
AMunitionType_AOE* AMunitionType_AOE::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_AOE");
    return (AMunitionType_AOE*)res;
}
