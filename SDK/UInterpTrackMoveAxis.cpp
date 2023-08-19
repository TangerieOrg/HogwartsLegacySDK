#include "EInterpMoveAxis.hpp"
#include "FInterpLookupTrack.hpp"
#include "UInterpTrackFloatBase.hpp"
#include "UInterpTrackMoveAxis.hpp"
UInterpTrackMoveAxis* UInterpTrackMoveAxis::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackMoveAxis");
    return (UInterpTrackMoveAxis*)res;
}
