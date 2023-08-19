#include "USceneGroupState_SanctuaryIdentity.hpp"
#include "UTimeRigGroupState.hpp"
USceneGroupState_SanctuaryIdentity* USceneGroupState_SanctuaryIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneGroupState_SanctuaryIdentity");
    return (USceneGroupState_SanctuaryIdentity*)res;
}
