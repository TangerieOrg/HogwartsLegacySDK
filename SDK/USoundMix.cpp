#include "FAudioEQEffect.hpp"
#include "FSoundClassAdjuster.hpp"
#include "UObject.hpp"
#include "USoundMix.hpp"
USoundMix* USoundMix::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundMix");
    return (USoundMix*)res;
}
