#include "UActorComponent.hpp"
#include "URiverSectionAudioVisualizerComponent.hpp"
URiverSectionAudioVisualizerComponent* URiverSectionAudioVisualizerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.RiverSectionAudioVisualizerComponent");
    return (URiverSectionAudioVisualizerComponent*)res;
}
