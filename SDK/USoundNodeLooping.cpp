#include "USoundNode.hpp"
#include "USoundNodeLooping.hpp"
USoundNodeLooping* USoundNodeLooping::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeLooping");
    return (USoundNodeLooping*)res;
}
