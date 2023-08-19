#include "AActor.hpp"
#include "AGuideSuppressionVolume.hpp"
#include "ATriggerBox.hpp"
#include "UFunction.hpp"
AGuideSuppressionVolume* AGuideSuppressionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GuideSuppressionVolume");
    return (AGuideSuppressionVolume*)res;
}
void AGuideSuppressionVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSuppressionVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AGuideSuppressionVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSuppressionVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
