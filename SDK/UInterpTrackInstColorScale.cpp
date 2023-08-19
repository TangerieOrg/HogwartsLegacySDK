#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstColorScale.hpp"
UInterpTrackInstColorScale* UInterpTrackInstColorScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstColorScale");
    return (UInterpTrackInstColorScale*)res;
}
