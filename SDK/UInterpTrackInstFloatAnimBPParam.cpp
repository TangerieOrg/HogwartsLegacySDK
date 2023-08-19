#include "UAnimInstance.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstFloatAnimBPParam.hpp"
UInterpTrackInstFloatAnimBPParam* UInterpTrackInstFloatAnimBPParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstFloatAnimBPParam");
    return (UInterpTrackInstFloatAnimBPParam*)res;
}
