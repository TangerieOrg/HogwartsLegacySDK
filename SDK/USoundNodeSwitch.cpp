#include "USoundNode.hpp"
#include "USoundNodeSwitch.hpp"
USoundNodeSwitch* USoundNodeSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeSwitch");
    return (USoundNodeSwitch*)res;
}
