#include "UInterpTrackFloatBase.hpp"
#include "UInterpTrackFloatParticleParam.hpp"
UInterpTrackFloatParticleParam* UInterpTrackFloatParticleParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackFloatParticleParam");
    return (UInterpTrackFloatParticleParam*)res;
}
