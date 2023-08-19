#include "UBaseProvider.hpp"
#include "UStagePreviewDriver.hpp"
UStagePreviewDriver* UStagePreviewDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StagePreviewDriver");
    return (UStagePreviewDriver*)res;
}
