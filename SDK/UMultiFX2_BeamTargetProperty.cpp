#include "UMultiFX2_BeamTargetBase.hpp"
#include "UMultiFX2_BeamTargetProperty.hpp"
UMultiFX2_BeamTargetProperty* UMultiFX2_BeamTargetProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_BeamTargetProperty");
    return (UMultiFX2_BeamTargetProperty*)res;
}
