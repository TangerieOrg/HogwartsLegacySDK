#include "UActorProvider.hpp"
#include "USceneAction_PerformTaskExecute.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_PerformTaskExecute* USceneAction_PerformTaskExecute::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PerformTaskExecute");
    return (USceneAction_PerformTaskExecute*)res;
}
