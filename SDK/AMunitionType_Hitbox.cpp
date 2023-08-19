#include "AMunitionType_Base.hpp"
#include "AMunitionType_Hitbox.hpp"
#include "ECollisionChannel.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
AMunitionType_Hitbox* AMunitionType_Hitbox::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_Hitbox");
    return (AMunitionType_Hitbox*)res;
}
