#include "FColor.hpp"
#include "UInterpTrackInstColorProp.hpp"
#include "UInterpTrackInstProperty.hpp"
UInterpTrackInstColorProp* UInterpTrackInstColorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstColorProp");
    return (UInterpTrackInstColorProp*)res;
}
