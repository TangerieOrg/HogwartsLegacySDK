#include "UInterpTrackInstBoolProp.hpp"
#include "UInterpTrackInstProperty.hpp"
UInterpTrackInstBoolProp* UInterpTrackInstBoolProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstBoolProp");
    return (UInterpTrackInstBoolProp*)res;
}
