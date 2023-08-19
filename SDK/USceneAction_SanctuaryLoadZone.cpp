#include "USceneAction_SanctuaryLoadZone.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_SanctuaryLoadZone* USceneAction_SanctuaryLoadZone::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SanctuaryLoadZone");
    return (USceneAction_SanctuaryLoadZone*)res;
}
