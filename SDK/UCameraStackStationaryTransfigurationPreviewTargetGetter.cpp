#include "UCameraStackStationaryTransfigurationPreviewTargetGetter.hpp"
#include "UCameraStackTransfigurationPreviewTargetGetter.hpp"
UCameraStackStationaryTransfigurationPreviewTargetGetter* UCameraStackStationaryTransfigurationPreviewTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackStationaryTransfigurationPreviewTargetGetter");
    return (UCameraStackStationaryTransfigurationPreviewTargetGetter*)res;
}
