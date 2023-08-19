#include "USceneActionState_HermesMessage.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_HermesMessage* USceneActionState_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_HermesMessage");
    return (USceneActionState_HermesMessage*)res;
}
