#include "USoundNode.hpp"
#include "USoundNodeConcatenator.hpp"
USoundNodeConcatenator* USoundNodeConcatenator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeConcatenator");
    return (USoundNodeConcatenator*)res;
}
