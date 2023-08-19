#include "UFXAdjustments.hpp"
#include "UFXAdjustments_TargetGeometryCollection.hpp"
UFXAdjustments_TargetGeometryCollection* UFXAdjustments_TargetGeometryCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_TargetGeometryCollection");
    return (UFXAdjustments_TargetGeometryCollection*)res;
}
