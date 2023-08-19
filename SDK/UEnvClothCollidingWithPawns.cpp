#include "AActor.hpp"
#include "FHitResult.hpp"
#include "UBoxComponent.hpp"
#include "UEnvClothCollidingWithPawns.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UEnvClothCollidingWithPawns* UEnvClothCollidingWithPawns::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvClothCollidingWithPawns");
    return (UEnvClothCollidingWithPawns*)res;
}
void UEnvClothCollidingWithPawns::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnvClothCollidingWithPawns.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult OverlapInfo; // 0x20
    }; // Size: 0xa8
    Params_OnBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.OverlapInfo = (FHitResult)OverlapInfo;
    ProcessEvent(func, &params);
    OverlapInfo = params.OverlapInfo;
}
void UEnvClothCollidingWithPawns::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnvClothCollidingWithPawns.OnEndOverlap"));
    struct Params_OnEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
