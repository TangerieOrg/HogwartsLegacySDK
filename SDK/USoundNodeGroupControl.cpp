#include "USoundNode.hpp"
#include "USoundNodeGroupControl.hpp"
USoundNodeGroupControl* USoundNodeGroupControl::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeGroupControl");
    return (USoundNodeGroupControl*)res;
}
