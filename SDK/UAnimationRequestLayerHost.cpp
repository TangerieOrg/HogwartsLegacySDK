#include "UAnimationRequestLayerHost.hpp"
#include "UInterface.hpp"
UAnimationRequestLayerHost* UAnimationRequestLayerHost::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationRequestLayerHost");
    return (UAnimationRequestLayerHost*)res;
}
