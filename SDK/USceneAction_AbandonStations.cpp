#include "USceneAction_AbandonStations.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AbandonStations* USceneAction_AbandonStations::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AbandonStations");
    return (USceneAction_AbandonStations*)res;
}
