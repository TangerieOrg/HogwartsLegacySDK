#include "ECameraStackBehaviorSorting.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackOperationBase.hpp"
#include "UCameraStackOperationReplace.hpp"
#include "UClass.hpp"
UCameraStackOperationReplace* UCameraStackOperationReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationReplace");
    return (UCameraStackOperationReplace*)res;
}
