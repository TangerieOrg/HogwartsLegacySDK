#include "UObjectProvider.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Object.hpp"
USceneRigParameter_Object* USceneRigParameter_Object::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Object");
    return (USceneRigParameter_Object*)res;
}
