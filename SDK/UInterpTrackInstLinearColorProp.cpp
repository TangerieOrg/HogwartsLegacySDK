#include "FLinearColor.hpp"
#include "UInterpTrackInstLinearColorProp.hpp"
#include "UInterpTrackInstProperty.hpp"
UInterpTrackInstLinearColorProp* UInterpTrackInstLinearColorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstLinearColorProp");
    return (UInterpTrackInstLinearColorProp*)res;
}
