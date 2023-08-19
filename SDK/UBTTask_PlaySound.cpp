#include "UBTTaskNode.hpp"
#include "UBTTask_PlaySound.hpp"
#include "USoundCue.hpp"
UBTTask_PlaySound* UBTTask_PlaySound::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_PlaySound");
    return (UBTTask_PlaySound*)res;
}
