#include "UInterpTrackLinearColorBase.hpp"
#include "UInterpTrackLinearColorProp.hpp"
UInterpTrackLinearColorProp* UInterpTrackLinearColorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackLinearColorProp");
    return (UInterpTrackLinearColorProp*)res;
}
