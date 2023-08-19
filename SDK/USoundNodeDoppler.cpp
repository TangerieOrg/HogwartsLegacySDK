#include "USoundNode.hpp"
#include "USoundNodeDoppler.hpp"
USoundNodeDoppler* USoundNodeDoppler::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeDoppler");
    return (USoundNodeDoppler*)res;
}
