#include "UMultiFX2_BeamGroundBelow.hpp"
#include "UMultiFX2_BeamTargetBase.hpp"
UMultiFX2_BeamGroundBelow* UMultiFX2_BeamGroundBelow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_BeamGroundBelow");
    return (UMultiFX2_BeamGroundBelow*)res;
}
