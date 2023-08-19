#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorChooseByMountType.hpp"
UCameraStackBehaviorChooseByMountType* UCameraStackBehaviorChooseByMountType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorChooseByMountType");
    return (UCameraStackBehaviorChooseByMountType*)res;
}
