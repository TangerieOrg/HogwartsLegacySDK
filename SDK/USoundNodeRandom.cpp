#include "USoundNode.hpp"
#include "USoundNodeRandom.hpp"
USoundNodeRandom* USoundNodeRandom::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeRandom");
    return (USoundNodeRandom*)res;
}
