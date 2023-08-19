#include "AnimationMatchFlags.hpp"
#include "AnimationTypeToFetch.hpp"
#include "UAnimationClip_TagLookup.hpp"
#include "UAnimationClip_TagLookupAndMatchTransform.hpp"
#include "UTransformProvider.hpp"
UAnimationClip_TagLookupAndMatchTransform* UAnimationClip_TagLookupAndMatchTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimationClip_TagLookupAndMatchTransform");
    return (UAnimationClip_TagLookupAndMatchTransform*)res;
}
