#include "AActor.hpp"
#include "ASanctuaryPortalCaptureExit.hpp"
#include "UClass.hpp"
#include "USceneCaptureComponentCubeIncremental.hpp"
ASanctuaryPortalCaptureExit* ASanctuaryPortalCaptureExit::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryPortalCaptureExit");
    return (ASanctuaryPortalCaptureExit*)res;
}
