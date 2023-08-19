#include "USceneAction_HermesMessageAdvanced.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_HermesMessageAdvanced* USceneAction_HermesMessageAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_HermesMessageAdvanced");
    return (USceneAction_HermesMessageAdvanced*)res;
}
