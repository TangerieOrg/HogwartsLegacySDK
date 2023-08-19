#include "APrecomputedVisibilityVolume.hpp"
#include "AVolume.hpp"
APrecomputedVisibilityVolume* APrecomputedVisibilityVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PrecomputedVisibilityVolume");
    return (APrecomputedVisibilityVolume*)res;
}
