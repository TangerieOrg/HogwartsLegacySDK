#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage.hpp"
#include "USceneRigStage_WinnerLoser.hpp"
USceneRigStage_WinnerLoser* USceneRigStage_WinnerLoser::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigStage_WinnerLoser");
    return (USceneRigStage_WinnerLoser*)res;
}
