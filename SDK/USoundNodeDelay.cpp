#include "USoundNode.hpp"
#include "USoundNodeDelay.hpp"
USoundNodeDelay* USoundNodeDelay::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeDelay");
    return (USoundNodeDelay*)res;
}
