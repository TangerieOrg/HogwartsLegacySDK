#include "AActor.hpp"
#include "FVector.hpp"
#include "UDisarmInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UDisarmInterface* UDisarmInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DisarmInterface");
    return (UDisarmInterface*)res;
}
AActor* UDisarmInterface::Disarm(AActor* Instigator, FVector HitDirection, float ScaleDisarmForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisarmInterface.Disarm"));
    struct Params_Disarm {
        AActor* Instigator; // 0x0
        FVector HitDirection; // 0x8
        float ScaleDisarmForce; // 0x14
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Disarm params{};
    params.Instigator = (AActor*)Instigator;
    params.HitDirection = (FVector)HitDirection;
    params.ScaleDisarmForce = (float)ScaleDisarmForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
