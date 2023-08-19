#include "ACullDistanceVolume.hpp"
#include "AVolume.hpp"
#include "FCullDistanceSizePair.hpp"
ACullDistanceVolume* ACullDistanceVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CullDistanceVolume");
    return (ACullDistanceVolume*)res;
}
