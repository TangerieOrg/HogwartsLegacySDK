#include "AActor.hpp"
#include "APrecomputedVisibilityOverrideVolume.hpp"
#include "AVolume.hpp"
APrecomputedVisibilityOverrideVolume* APrecomputedVisibilityOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PrecomputedVisibilityOverrideVolume");
    return (APrecomputedVisibilityOverrideVolume*)res;
}
