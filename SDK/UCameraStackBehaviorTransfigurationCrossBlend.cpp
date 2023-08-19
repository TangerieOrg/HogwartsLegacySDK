#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#include "UCameraStackBehaviorTransfigurationCrossBlend.hpp"
UCameraStackBehaviorTransfigurationCrossBlend* UCameraStackBehaviorTransfigurationCrossBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorTransfigurationCrossBlend");
    return (UCameraStackBehaviorTransfigurationCrossBlend*)res;
}
