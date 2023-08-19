#include "UActorProvider.hpp"
#include "UAnimationTransformProvider.hpp"
#include "UTransform_AnimationSocket.hpp"
UTransform_AnimationSocket* UTransform_AnimationSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_AnimationSocket");
    return (UTransform_AnimationSocket*)res;
}
