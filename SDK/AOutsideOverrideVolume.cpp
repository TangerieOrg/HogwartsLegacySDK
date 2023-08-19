#include "AInsideOutsideOverrideVolume.hpp"
#include "AOutsideOverrideVolume.hpp"
AOutsideOverrideVolume* AOutsideOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.OutsideOverrideVolume");
    return (AOutsideOverrideVolume*)res;
}
