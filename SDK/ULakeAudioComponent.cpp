#include "FLakeAudioSamplePoint.hpp"
#include "UAkComponent.hpp"
#include "ULakeAudioComponent.hpp"
ULakeAudioComponent* ULakeAudioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeAudioComponent");
    return (ULakeAudioComponent*)res;
}
