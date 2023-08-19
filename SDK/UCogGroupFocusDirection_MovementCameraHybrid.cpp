#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_MovementCameraHybrid.hpp"
UCogGroupFocusDirection_MovementCameraHybrid* UCogGroupFocusDirection_MovementCameraHybrid::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupFocusDirection_MovementCameraHybrid");
    return (UCogGroupFocusDirection_MovementCameraHybrid*)res;
}
