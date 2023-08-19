#include "APostProcessVolume.hpp"
#include "AVolume.hpp"
#include "FPostProcessSettings.hpp"
APostProcessVolume* APostProcessVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PostProcessVolume");
    return (APostProcessVolume*)res;
}
void APostProcessVolume::AddOrUpdateBlendable() {}
