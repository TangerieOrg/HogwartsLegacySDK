#include "UFXUpdate_BeamTargetAttach.hpp"
#include "UFXUpdate_BeamTargetLocation.hpp"
UFXUpdate_BeamTargetLocation* UFXUpdate_BeamTargetLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_BeamTargetLocation");
    return (UFXUpdate_BeamTargetLocation*)res;
}
