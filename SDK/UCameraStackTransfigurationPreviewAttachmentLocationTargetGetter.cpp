#include "UCameraStackTransfigurationPreviewAttachmentLocationTargetGetter.hpp"
#include "UCameraStackTransfigurationPreviewTargetGetter.hpp"
UCameraStackTransfigurationPreviewAttachmentLocationTargetGetter* UCameraStackTransfigurationPreviewAttachmentLocationTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackTransfigurationPreviewAttachmentLocationTargetGetter");
    return (UCameraStackTransfigurationPreviewAttachmentLocationTargetGetter*)res;
}
