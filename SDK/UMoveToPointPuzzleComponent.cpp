#include "AActor.hpp"
#include "ATargetPoint.hpp"
#include "ETargetOrientation.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMoveToPointPuzzleComponent.hpp"
#include "UPrimitiveComponent.hpp"
UMoveToPointPuzzleComponent* UMoveToPointPuzzleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MoveToPointPuzzleComponent");
    return (UMoveToPointPuzzleComponent*)res;
}
bool UMoveToPointPuzzleComponent::Move(FVector Direction, float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MoveToPointPuzzleComponent.Move"));
    struct Params_Move {
        FVector Direction; // 0x0
        float Speed; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Move params{};
    params.Direction = (FVector)Direction;
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMoveToPointPuzzleComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MoveToPointPuzzleComponent.OnBeginOverlap"));
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
