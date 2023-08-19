#include "ECameraStackBehaviorSorting.hpp"
#include "ECameraStackOperationInsertLocation.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackOperationBase.hpp"
#include "UCameraStackOperationInsert.hpp"
#include "UClass.hpp"
UCameraStackOperationInsert* UCameraStackOperationInsert::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationInsert");
    return (UCameraStackOperationInsert*)res;
}
