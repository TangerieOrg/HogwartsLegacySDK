#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_ActorFacing.hpp"
UCogGroupFocusDirection_ActorFacing* UCogGroupFocusDirection_ActorFacing::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection_ActorFacing");
    return (UCogGroupFocusDirection_ActorFacing*)res;
}
