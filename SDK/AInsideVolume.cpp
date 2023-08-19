#include "AInsideVolume.hpp"
#include "AVolume.hpp"
#include "UAvaInsideVolumeComponent.hpp"
AInsideVolume* AInsideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InsideVolume");
    return (AInsideVolume*)res;
}
