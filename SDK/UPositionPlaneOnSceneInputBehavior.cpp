#include "UAnyButtonInputBehavior.hpp"
#include "UPositionPlaneOnSceneInputBehavior.hpp"
UPositionPlaneOnSceneInputBehavior* UPositionPlaneOnSceneInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PositionPlaneOnSceneInputBehavior");
    return (UPositionPlaneOnSceneInputBehavior*)res;
}
