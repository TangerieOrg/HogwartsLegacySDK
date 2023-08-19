#include "UFXUpdate.hpp"
#include "UFXUpdate_BeamTargetSkeleton.hpp"
UFXUpdate_BeamTargetSkeleton* UFXUpdate_BeamTargetSkeleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_BeamTargetSkeleton");
    return (UFXUpdate_BeamTargetSkeleton*)res;
}
