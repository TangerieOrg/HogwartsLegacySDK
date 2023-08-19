#include "AActor.hpp"
#include "AMercunaNavOctree.hpp"
#include "AMercunaNavTestingActor.hpp"
#include "EMercunaSplineEvent\Type.hpp"
#include "FMercunaPawnUsageFlags.hpp"
#include "UFunction.hpp"
#include "UMercunaSpline.hpp"
#include "USphereComponent.hpp"
AMercunaNavTestingActor* AMercunaNavTestingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavTestingActor");
    return (AMercunaNavTestingActor*)res;
}
void AMercunaNavTestingActor::OnSplineUpdate(EMercunaSplineEvent::Type SplineEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavTestingActor.OnSplineUpdate"));
    struct Params_OnSplineUpdate {
        EMercunaSplineEvent::Type SplineEvent; // 0x0
    }; // Size: 0x1
    Params_OnSplineUpdate params{};
    params.SplineEvent = (EMercunaSplineEvent::Type)SplineEvent;
    ProcessEvent(func, &params);
}
void AMercunaNavTestingActor::OnOctreeBuildComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavTestingActor.OnOctreeBuildComplete"));
    struct Params_OnOctreeBuildComplete {
    }; // Size: 0x0
    Params_OnOctreeBuildComplete params{};
    ProcessEvent(func, &params);
}
