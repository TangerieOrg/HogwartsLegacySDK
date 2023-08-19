#include "AActor.hpp"
#include "AInteractiveFoliageActor.hpp"
#include "AStaticMeshActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
AInteractiveFoliageActor* AInteractiveFoliageActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.InteractiveFoliageActor");
    return (AInteractiveFoliageActor*)res;
}
void AInteractiveFoliageActor::CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched"));
    struct Params_CapsuleTouched {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult OverlapInfo; // 0x20
    }; // Size: 0xa8
    Params_CapsuleTouched params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.OverlapInfo = (FHitResult)OverlapInfo;
    ProcessEvent(func, &params);
    OverlapInfo = params.OverlapInfo;
}
