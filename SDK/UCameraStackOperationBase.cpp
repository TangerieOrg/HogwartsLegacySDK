#include "UCameraStackOperationBase.hpp"
#include "UObject.hpp"
UCameraStackOperationBase* UCameraStackOperationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationBase");
    return (UCameraStackOperationBase*)res;
}
