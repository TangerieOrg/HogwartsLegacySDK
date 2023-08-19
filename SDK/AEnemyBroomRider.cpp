#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "AEnemyBroomRider.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UFunction.hpp"
AEnemyBroomRider* AEnemyBroomRider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyBroomRider");
    return (AEnemyBroomRider*)res;
}
FName AEnemyBroomRider::OnOverrideCharacterLook(AActor* Actor, FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider.OnOverrideCharacterLook"));
    struct Params_OnOverrideCharacterLook {
        AActor* Actor; // 0x0
        FName Name; // 0x8
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_OnOverrideCharacterLook params{};
    params.Actor = (AActor*)Actor;
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
