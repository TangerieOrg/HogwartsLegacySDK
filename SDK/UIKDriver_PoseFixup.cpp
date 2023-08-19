#include "UIKDriver.hpp"
#include "UIKDriver_PoseFixup.hpp"
UIKDriver_PoseFixup* UIKDriver_PoseFixup::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver_PoseFixup");
    return (UIKDriver_PoseFixup*)res;
}
