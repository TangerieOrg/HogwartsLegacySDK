#include "EAnimInterpolationType.hpp"
#include "ERootMotionRootLock\Type.hpp"
#include "UAnimBoneCompressionSettings.hpp"
#include "UAnimCurveCompressionSettings.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAnimStreamable.hpp"
UAnimStreamable* UAnimStreamable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimStreamable");
    return (UAnimStreamable*)res;
}
