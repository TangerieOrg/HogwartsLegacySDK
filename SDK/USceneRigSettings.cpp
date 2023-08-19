#include "UObject.hpp"
#include "USceneRigSettings.hpp"
USceneRigSettings* USceneRigSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigSettings");
    return (USceneRigSettings*)res;
}
