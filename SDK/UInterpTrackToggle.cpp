#include "FToggleTrackKey.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackToggle.hpp"
UInterpTrackToggle* UInterpTrackToggle::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackToggle");
    return (UInterpTrackToggle*)res;
}
