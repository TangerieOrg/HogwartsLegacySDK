#include "USoundNode.hpp"
#include "USoundNodeOscillator.hpp"
USoundNodeOscillator* USoundNodeOscillator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeOscillator");
    return (USoundNodeOscillator*)res;
}
