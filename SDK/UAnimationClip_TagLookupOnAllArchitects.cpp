#include "UAnimationClip_TagLookupOnAllArchitects.hpp"
#include "UAnimationClip_TagLookupOnStationArchitect.hpp"
UAnimationClip_TagLookupOnAllArchitects* UAnimationClip_TagLookupOnAllArchitects::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClip_TagLookupOnAllArchitects");
    return (UAnimationClip_TagLookupOnAllArchitects*)res;
}
