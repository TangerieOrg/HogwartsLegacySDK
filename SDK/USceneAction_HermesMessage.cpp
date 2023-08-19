#include "USceneAction_HermesMessage.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_HermesMessage* USceneAction_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_HermesMessage");
    return (USceneAction_HermesMessage*)res;
}
