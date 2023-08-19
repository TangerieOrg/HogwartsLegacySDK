#include "UClass.hpp"
#include "UObject.hpp"
#include "UPhoenixSceneRigSettings.hpp"
UPhoenixSceneRigSettings* UPhoenixSceneRigSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRigShim.PhoenixSceneRigSettings");
    return (UPhoenixSceneRigSettings*)res;
}
