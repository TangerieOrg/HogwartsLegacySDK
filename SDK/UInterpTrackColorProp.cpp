#include "UInterpTrackColorProp.hpp"
#include "UInterpTrackVectorBase.hpp"
UInterpTrackColorProp* UInterpTrackColorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackColorProp");
    return (UInterpTrackColorProp*)res;
}
