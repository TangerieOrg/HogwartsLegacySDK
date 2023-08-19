#include "UInterface.hpp"
#include "UInterface_PostProcessVolume.hpp"
UInterface_PostProcessVolume* UInterface_PostProcessVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Interface_PostProcessVolume");
    return (UInterface_PostProcessVolume*)res;
}
