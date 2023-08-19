#include "UMultiFX2_BeamTargetBase.hpp"
#include "UObject.hpp"
UMultiFX2_BeamTargetBase* UMultiFX2_BeamTargetBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_BeamTargetBase");
    return (UMultiFX2_BeamTargetBase*)res;
}
