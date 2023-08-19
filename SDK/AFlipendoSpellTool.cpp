#include "AActor.hpp"
#include "AFireOnceSpellTool.hpp"
#include "AFlipendoSpellTool.hpp"
#include "FFlipendoLevelData.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
AFlipendoSpellTool* AFlipendoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlipendoSpellTool");
    return (AFlipendoSpellTool*)res;
}
void AFlipendoSpellTool::FlipTarget(AActor* InTargetActor, UPrimitiveComponent* InTargetComp, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlipendoSpellTool.FlipTarget"));
    struct Params_FlipTarget {
        AActor* InTargetActor; // 0x0
        UPrimitiveComponent* InTargetComp; // 0x8
        FVector ImpactLocation; // 0x10
    }; // Size: 0x1c
    Params_FlipTarget params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InTargetComp = (UPrimitiveComponent*)InTargetComp;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
