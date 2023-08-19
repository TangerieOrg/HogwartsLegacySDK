#include "UAvaAnimationMovementInterface.hpp"
#include "UInterface.hpp"
UAvaAnimationMovementInterface* UAvaAnimationMovementInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AvaAnimationMovementInterface");
    return (UAvaAnimationMovementInterface*)res;
}
