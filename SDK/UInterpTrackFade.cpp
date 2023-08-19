#include "FLinearColor.hpp"
#include "UInterpTrackFade.hpp"
#include "UInterpTrackFloatBase.hpp"
UInterpTrackFade* UInterpTrackFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackFade");
    return (UInterpTrackFade*)res;
}
