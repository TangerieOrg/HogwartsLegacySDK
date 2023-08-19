#include "FInterpCurveLinearColor.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackLinearColorBase.hpp"
UInterpTrackLinearColorBase* UInterpTrackLinearColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackLinearColorBase");
    return (UInterpTrackLinearColorBase*)res;
}
