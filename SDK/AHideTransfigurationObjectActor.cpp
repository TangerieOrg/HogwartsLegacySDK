#include "AActor.hpp"
#include "AHideTransfigurationObjectActor.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
AHideTransfigurationObjectActor* AHideTransfigurationObjectActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HideTransfigurationObjectActor");
    return (AHideTransfigurationObjectActor*)res;
}
void AHideTransfigurationObjectActor::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTransfigurationObjectActor.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnOverlapEnd params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
