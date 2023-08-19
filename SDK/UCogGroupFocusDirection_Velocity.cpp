#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_Velocity.hpp"
UCogGroupFocusDirection_Velocity* UCogGroupFocusDirection_Velocity::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection_Velocity");
    return (UCogGroupFocusDirection_Velocity*)res;
}
