#include "UFXUpdate_BeamTargetAttach.hpp"
#include "UFXUpdate_Tick.hpp"
#include "UMultiFX2_BeamTargetBase.hpp"
UFXUpdate_BeamTargetAttach* UFXUpdate_BeamTargetAttach::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_BeamTargetAttach");
    return (UFXUpdate_BeamTargetAttach*)res;
}
