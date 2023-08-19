#include "USceneActionState_HermesMessageAdvanced.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_HermesMessageAdvanced* USceneActionState_HermesMessageAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_HermesMessageAdvanced");
    return (USceneActionState_HermesMessageAdvanced*)res;
}
