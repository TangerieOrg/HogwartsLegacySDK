#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_Camera.hpp"
UCogGroupFocusDirection_Camera* UCogGroupFocusDirection_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection_Camera");
    return (UCogGroupFocusDirection_Camera*)res;
}
