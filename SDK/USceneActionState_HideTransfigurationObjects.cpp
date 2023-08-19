#include "USceneActionState_HideTransfigurationObjects.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_HideTransfigurationObjects* USceneActionState_HideTransfigurationObjects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_HideTransfigurationObjects");
    return (USceneActionState_HideTransfigurationObjects*)res;
}
