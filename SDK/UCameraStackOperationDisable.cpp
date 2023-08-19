#include "UCameraStackOperationBase.hpp"
#include "UCameraStackOperationDisable.hpp"
#include "UClass.hpp"
UCameraStackOperationDisable* UCameraStackOperationDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationDisable");
    return (UCameraStackOperationDisable*)res;
}
