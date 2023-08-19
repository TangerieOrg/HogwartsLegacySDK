#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_Camera.hpp"
UCogGroupUpDirection_Camera* UCogGroupUpDirection_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupUpDirection_Camera");
    return (UCogGroupUpDirection_Camera*)res;
}
