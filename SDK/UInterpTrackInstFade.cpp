#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstFade.hpp"
UInterpTrackInstFade* UInterpTrackInstFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstFade");
    return (UInterpTrackInstFade*)res;
}
