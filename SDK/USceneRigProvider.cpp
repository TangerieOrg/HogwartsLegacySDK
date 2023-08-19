#include "UObjectProvider.hpp"
#include "USceneRigProvider.hpp"
USceneRigProvider* USceneRigProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigProvider");
    return (USceneRigProvider*)res;
}
