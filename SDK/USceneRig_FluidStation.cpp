#include "USceneRig_FluidStation.hpp"
#include "USceneRig_TagLookup.hpp"
USceneRig_FluidStation* USceneRig_FluidStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_FluidStation");
    return (USceneRig_FluidStation*)res;
}
