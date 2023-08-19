#include "ETrollSwingDirection.hpp"
#include "UEnemyTrollInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UEnemyTrollInterface* UEnemyTrollInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyTrollInterface");
    return (UEnemyTrollInterface*)res;
}
void UEnemyTrollInterface::SetTrollSwingDirection(ETrollSwingDirection TrollSwingDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyTrollInterface.SetTrollSwingDirection"));
    struct Params_SetTrollSwingDirection {
        ETrollSwingDirection TrollSwingDirection; // 0x0
    }; // Size: 0x1
    Params_SetTrollSwingDirection params{};
    params.TrollSwingDirection = (ETrollSwingDirection)TrollSwingDirection;
    ProcessEvent(func, &params);
}
ETrollSwingDirection UEnemyTrollInterface::GetTrollSwingDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyTrollInterface.GetTrollSwingDirection"));
    struct Params_GetTrollSwingDirection {
        ETrollSwingDirection ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrollSwingDirection params{};
    ProcessEvent(func, &params);
    return (ETrollSwingDirection)params.ReturnValue;
}
