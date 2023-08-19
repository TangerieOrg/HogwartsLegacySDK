#include "AActor.hpp"
#include "ABP_OPP_FlourSack_C.hpp"
#include "AWorldObject.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
ABP_OPP_FlourSack_C* ABP_OPP_FlourSack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C");
    return (ABP_OPP_FlourSack_C*)res;
}
void ABP_OPP_FlourSack_C::OnHitByOppugnoImpact(AActor* Instigator, AActor* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnHitByOppugnoImpact"));
    struct Params_OnHitByOppugnoImpact {
        AActor* Instigator; // 0x0
        AActor* Object; // 0x8
    }; // Size: 0x10
    Params_OnHitByOppugnoImpact params{};
    params.Instigator = (AActor*)Instigator;
    params.Object = (AActor*)Object;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::OnOppugnoEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnOppugnoEnd"));
    struct Params_OnOppugnoEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::OnOppugnoHold(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnOppugnoHold"));
    struct Params_OnOppugnoHold {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoHold params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::OnOppugnoPull(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnOppugnoPull"));
    struct Params_OnOppugnoPull {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoPull params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::OnOppugnoImpact(AActor* Instigator, AActor* Target, AActor* HitObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnOppugnoImpact"));
    struct Params_OnOppugnoImpact {
        AActor* Instigator; // 0x0
        AActor* Target; // 0x8
        AActor* HitObject; // 0x10
    }; // Size: 0x18
    Params_OnOppugnoImpact params{};
    params.Instigator = (AActor*)Instigator;
    params.Target = (AActor*)Target;
    params.HitObject = (AActor*)HitObject;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::OnOppugnoThrow(AActor* Instigator, AActor* Target, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/OppugnoObjects/BP_OPP_FlourSack.BP_OPP_FlourSack_C.OnOppugnoThrow"));
    struct Params_OnOppugnoThrow {
        AActor* Instigator; // 0x0
        AActor* Target; // 0x8
        FVector Velocity; // 0x10
    }; // Size: 0x1c
    Params_OnOppugnoThrow params{};
    params.Instigator = (AActor*)Instigator;
    params.Target = (AActor*)Target;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
void ABP_OPP_FlourSack_C::ExecuteUbergraph_BP_OPP_FlourSack(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
