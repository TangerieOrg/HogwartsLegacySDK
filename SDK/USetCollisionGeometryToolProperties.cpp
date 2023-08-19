#include "ECollisionGeometryMode.hpp"
#include "ECollisionGeometryType.hpp"
#include "EProjectedHullAxis.hpp"
#include "ESetCollisionGeometryInputMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "USetCollisionGeometryToolProperties.hpp"
USetCollisionGeometryToolProperties* USetCollisionGeometryToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SetCollisionGeometryToolProperties");
    return (USetCollisionGeometryToolProperties*)res;
}
