#include "UMultiFX2_BeamTarget.hpp"
#include "UMultiFX2_BeamTargetBase.hpp"
UMultiFX2_BeamTarget* UMultiFX2_BeamTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_BeamTarget");
    return (UMultiFX2_BeamTarget*)res;
}
