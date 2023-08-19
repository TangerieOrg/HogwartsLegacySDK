#include "UCameraStackOperationScratchData.hpp"
#include "UObject.hpp"
UCameraStackOperationScratchData* UCameraStackOperationScratchData::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationScratchData");
    return (UCameraStackOperationScratchData*)res;
}
