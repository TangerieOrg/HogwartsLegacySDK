#include "AActor.hpp"
#include "AMunitionType_PhoenixSubsonic.hpp"
#include "AMunitionType_Subsonic.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
AMunitionType_PhoenixSubsonic* AMunitionType_PhoenixSubsonic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_PhoenixSubsonic");
    return (AMunitionType_PhoenixSubsonic*)res;
}
ASpellTool* AMunitionType_PhoenixSubsonic::GetSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_PhoenixSubsonic.GetSpellTool"));
    struct Params_GetSpellTool {
        ASpellTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellTool params{};
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
void AMunitionType_PhoenixSubsonic::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_PhoenixSubsonic.BeginOverlap"));
    struct Params_BeginOverlap {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BeginOverlap params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
