#include "ETrackToggleAction.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstToggle.hpp"
UInterpTrackInstToggle* UInterpTrackInstToggle::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstToggle");
    return (UInterpTrackInstToggle*)res;
}
