#include "UEnemyInfo.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
void UEnemyInfo::HandleNameChanged(FName NameIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.HandleNameChanged"));
    struct Params_HandleNameChanged {
        FName NameIn; // 0x0
    }; // Size: 0x8
    Params_HandleNameChanged params{};
    params.NameIn = (FName)NameIn;
    ProcessEvent(func, &params);
}
void UEnemyInfo::SetName(FName NameIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.SetName"));
    struct Params_SetName {
        FName NameIn; // 0x0
    }; // Size: 0x8
    Params_SetName params{};
    params.NameIn = (FName)NameIn;
    ProcessEvent(func, &params);
}
UEnemyInfo* UEnemyInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyInfo");
    return (UEnemyInfo*)res;
}
void UEnemyInfo::Show(bool VisibleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.Show"));
    struct Params_Show {
        bool VisibleIn; // 0x0
    }; // Size: 0x1
    Params_Show params{};
    params.VisibleIn = (bool)VisibleIn;
    ProcessEvent(func, &params);
}
void UEnemyInfo::HandleShow(bool VisibleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.HandleShow"));
    struct Params_HandleShow {
        bool VisibleIn; // 0x0
    }; // Size: 0x1
    Params_HandleShow params{};
    params.VisibleIn = (bool)VisibleIn;
    ProcessEvent(func, &params);
}
void UEnemyInfo::SetHelthPercentage(float HealthIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.SetHelthPercentage"));
    struct Params_SetHelthPercentage {
        float HealthIn; // 0x0
    }; // Size: 0x4
    Params_SetHelthPercentage params{};
    params.HealthIn = (float)HealthIn;
    ProcessEvent(func, &params);
}
void UEnemyInfo::HandleHealthPercentageChanged(float HealthIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyInfo.HandleHealthPercentageChanged"));
    struct Params_HandleHealthPercentageChanged {
        float HealthIn; // 0x0
    }; // Size: 0x4
    Params_HandleHealthPercentageChanged params{};
    params.HealthIn = (float)HealthIn;
    ProcessEvent(func, &params);
}
