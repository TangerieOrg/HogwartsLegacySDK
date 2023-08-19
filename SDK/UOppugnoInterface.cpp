#include "AActor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UOppugnoInterface.hpp"
void UOppugnoInterface::OnOppugnoThrow(AActor* Instigator, AActor* Target, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnOppugnoThrow"));
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
UOppugnoInterface* UOppugnoInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OppugnoInterface");
    return (UOppugnoInterface*)res;
}
void UOppugnoInterface::OnOppugnoPull(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnOppugnoPull"));
    struct Params_OnOppugnoPull {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoPull params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UOppugnoInterface::OnOppugnoImpact(AActor* Instigator, AActor* Target, AActor* HitObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnOppugnoImpact"));
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
void UOppugnoInterface::OnOppugnoEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnOppugnoEnd"));
    struct Params_OnOppugnoEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UOppugnoInterface::OnOppugnoHold(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnOppugnoHold"));
    struct Params_OnOppugnoHold {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnOppugnoHold params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UOppugnoInterface::OnHitByOppugnoImpact(AActor* Instigator, AActor* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoInterface.OnHitByOppugnoImpact"));
    struct Params_OnHitByOppugnoImpact {
        AActor* Instigator; // 0x0
        AActor* Object; // 0x8
    }; // Size: 0x10
    Params_OnHitByOppugnoImpact params{};
    params.Instigator = (AActor*)Instigator;
    params.Object = (AActor*)Object;
    ProcessEvent(func, &params);
}
