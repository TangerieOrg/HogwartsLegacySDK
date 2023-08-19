#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#include "UCameraStackTransfigurationPreviewTargetGetter.hpp"
UCameraStackTransfigurationPreviewTargetGetter* UCameraStackTransfigurationPreviewTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackTransfigurationPreviewTargetGetter");
    return (UCameraStackTransfigurationPreviewTargetGetter*)res;
}
