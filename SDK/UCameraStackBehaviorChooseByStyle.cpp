#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorChooseByStyle.hpp"
UCameraStackBehaviorChooseByStyle* UCameraStackBehaviorChooseByStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorChooseByStyle");
    return (UCameraStackBehaviorChooseByStyle*)res;
}
