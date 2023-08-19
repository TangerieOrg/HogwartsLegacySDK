#include "EAdditiveAnimationType.hpp"
#include "EAdditiveBasePoseType.hpp"
#include "EAnimInterpolationType.hpp"
#include "ERootMotionRootLock\Type.hpp"
#include "FAnimSyncMarker.hpp"
#include "FBakedCustomAttributePerBoneData.hpp"
#include "FTrackToSkeletonMap.hpp"
#include "FTransform.hpp"
#include "UAnimBoneCompressionSettings.hpp"
#include "UAnimCurveCompressionSettings.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSequenceBase.hpp"
UAnimSequence* UAnimSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimSequence");
    return (UAnimSequence*)res;
}
