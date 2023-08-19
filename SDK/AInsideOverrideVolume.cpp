#include "AInsideOutsideOverrideVolume.hpp"
#include "AInsideOverrideVolume.hpp"
AInsideOverrideVolume* AInsideOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.InsideOverrideVolume");
    return (AInsideOverrideVolume*)res;
}
