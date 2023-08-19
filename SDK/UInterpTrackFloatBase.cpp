#include "FInterpCurveFloat.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackFloatBase.hpp"
UInterpTrackFloatBase* UInterpTrackFloatBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackFloatBase");
    return (UInterpTrackFloatBase*)res;
}
