#include "UInterpTrackColorScale.hpp"
#include "UInterpTrackVectorBase.hpp"
UInterpTrackColorScale* UInterpTrackColorScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackColorScale");
    return (UInterpTrackColorScale*)res;
}
