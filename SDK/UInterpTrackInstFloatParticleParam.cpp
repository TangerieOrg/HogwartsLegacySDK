#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstFloatParticleParam.hpp"
UInterpTrackInstFloatParticleParam* UInterpTrackInstFloatParticleParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstFloatParticleParam");
    return (UInterpTrackInstFloatParticleParam*)res;
}
