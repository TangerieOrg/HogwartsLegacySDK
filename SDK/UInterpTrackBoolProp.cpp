#include "FBoolTrackKey.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackBoolProp.hpp"
UInterpTrackBoolProp* UInterpTrackBoolProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackBoolProp");
    return (UInterpTrackBoolProp*)res;
}
