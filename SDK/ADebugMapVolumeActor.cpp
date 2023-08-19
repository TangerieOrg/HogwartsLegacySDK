#include "AActor.hpp"
#include "ADebugMapVolumeActor.hpp"
#include "UDebugMapVolumeComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
ADebugMapVolumeActor* ADebugMapVolumeActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DebugMapVolumeActor");
    return (ADebugMapVolumeActor*)res;
}
