#include "USoundNode.hpp"
#include "USoundNodeMixer.hpp"
USoundNodeMixer* USoundNodeMixer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeMixer");
    return (USoundNodeMixer*)res;
}
