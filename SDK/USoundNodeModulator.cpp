#include "USoundNode.hpp"
#include "USoundNodeModulator.hpp"
USoundNodeModulator* USoundNodeModulator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeModulator");
    return (USoundNodeModulator*)res;
}
