#include "ANPC_Spline.hpp"
#include "ANPC_SplineVolume.hpp"
#include "ANPC_Volume.hpp"
ANPC_SplineVolume* ANPC_SplineVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_SplineVolume");
    return (ANPC_SplineVolume*)res;
}
