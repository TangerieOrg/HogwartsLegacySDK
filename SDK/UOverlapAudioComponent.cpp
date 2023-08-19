#include "UOverlapAudioComponent.hpp"
#include "UOverlapEffectsComponent.hpp"
UOverlapAudioComponent* UOverlapAudioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OverlapAudioComponent");
    return (UOverlapAudioComponent*)res;
}
