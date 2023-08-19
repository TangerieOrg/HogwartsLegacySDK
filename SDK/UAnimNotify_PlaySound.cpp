#include "UAnimNotify.hpp"
#include "UAnimNotify_PlaySound.hpp"
#include "USoundBase.hpp"
UAnimNotify_PlaySound* UAnimNotify_PlaySound::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_PlaySound");
    return (UAnimNotify_PlaySound*)res;
}
