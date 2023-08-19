#include "FInterpCurveVector.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackVectorBase.hpp"
UInterpTrackVectorBase* UInterpTrackVectorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackVectorBase");
    return (UInterpTrackVectorBase*)res;
}
