#include "FEventTrackKey.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackEvent.hpp"
UInterpTrackEvent* UInterpTrackEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackEvent");
    return (UInterpTrackEvent*)res;
}
