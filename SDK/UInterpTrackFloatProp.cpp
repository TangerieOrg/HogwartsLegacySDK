#include "UInterpTrackFloatBase.hpp"
#include "UInterpTrackFloatProp.hpp"
UInterpTrackFloatProp* UInterpTrackFloatProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackFloatProp");
    return (UInterpTrackFloatProp*)res;
}
