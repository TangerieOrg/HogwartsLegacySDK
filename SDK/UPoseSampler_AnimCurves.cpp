#include "UPoseSampler.hpp"
#include "UPoseSampler_AnimCurves.hpp"
UPoseSampler_AnimCurves* UPoseSampler_AnimCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.PoseSampler_AnimCurves");
    return (UPoseSampler_AnimCurves*)res;
}
