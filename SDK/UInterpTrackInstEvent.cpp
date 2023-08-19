#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstEvent.hpp"
UInterpTrackInstEvent* UInterpTrackInstEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstEvent");
    return (UInterpTrackInstEvent*)res;
}
