#include "UActorProvider.hpp"
#include "USceneAction_HideTransfigurationObjects.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_HideTransfigurationObjects* USceneAction_HideTransfigurationObjects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_HideTransfigurationObjects");
    return (USceneAction_HideTransfigurationObjects*)res;
}
