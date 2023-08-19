#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_MovementCameraHybrid.hpp"
UCogGroupUpDirection_MovementCameraHybrid* UCogGroupUpDirection_MovementCameraHybrid::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupUpDirection_MovementCameraHybrid");
    return (UCogGroupUpDirection_MovementCameraHybrid*)res;
}
