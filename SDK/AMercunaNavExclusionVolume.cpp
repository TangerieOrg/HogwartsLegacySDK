#include "AMercunaNavExclusionVolume.hpp"
#include "AMercunaNavOctree.hpp"
#include "AVolume.hpp"
AMercunaNavExclusionVolume* AMercunaNavExclusionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavExclusionVolume");
    return (AMercunaNavExclusionVolume*)res;
}
