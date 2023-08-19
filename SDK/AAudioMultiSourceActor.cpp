#include "AAudioMultiSourceActor.hpp"
#include "AVolume.hpp"
#include "FAudioMultiSourceAudioEvent.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
AAudioMultiSourceActor* AAudioMultiSourceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AudioMultiSourceActor");
    return (AAudioMultiSourceActor*)res;
}
