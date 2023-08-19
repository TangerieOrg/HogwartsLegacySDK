#include "AActor.hpp"
#include "ARiverSectionAudio.hpp"
#include "FRiverAudioPoint.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
ARiverSectionAudio* ARiverSectionAudio::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.RiverSectionAudio");
    return (ARiverSectionAudio*)res;
}
