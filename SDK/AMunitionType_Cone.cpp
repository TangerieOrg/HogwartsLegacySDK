#include "AMunitionType_Base.hpp"
#include "AMunitionType_Cone.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UParticleSystem.hpp"
AMunitionType_Cone* AMunitionType_Cone::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_Cone");
    return (AMunitionType_Cone*)res;
}
