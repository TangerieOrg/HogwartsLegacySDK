#include "USoundNode.hpp"
#include "USoundNodeMature.hpp"
USoundNodeMature* USoundNodeMature::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeMature");
    return (USoundNodeMature*)res;
}
