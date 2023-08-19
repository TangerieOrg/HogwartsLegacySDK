#include "UInterpTrackInstFloatProp.hpp"
#include "UInterpTrackInstProperty.hpp"
UInterpTrackInstFloatProp* UInterpTrackInstFloatProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstFloatProp");
    return (UInterpTrackInstFloatProp*)res;
}
