#include "AActor.hpp"
#include "AOdcDebugDrawActor.hpp"
#include "UDebugPanelComponent.hpp"
#include "ULineBatchComponent.hpp"
#include "UOdcCanvasTextComponent.hpp"
AOdcDebugDrawActor* AOdcDebugDrawActor::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcDebugDrawActor");
    return (AOdcDebugDrawActor*)res;
}
