#include "UCameraPostProcessHandler.hpp"
#include "UObject.hpp"
UCameraPostProcessHandler* UCameraPostProcessHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraPostProcessHandler");
    return (UCameraPostProcessHandler*)res;
}
