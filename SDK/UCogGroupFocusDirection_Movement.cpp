#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_Movement.hpp"
UCogGroupFocusDirection_Movement* UCogGroupFocusDirection_Movement::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection_Movement");
    return (UCogGroupFocusDirection_Movement*)res;
}
