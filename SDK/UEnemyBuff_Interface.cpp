#include "EEnemyBuffTypeEnum.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UEnemyBuff_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UEnemyBuff_Interface* UEnemyBuff_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyBuff_Interface");
    return (UEnemyBuff_Interface*)res;
}
bool UEnemyBuff_Interface::UpdateBuffEmitterLocationAndRotFx(FVector Location, FRotator Rotation, EEnemyBuffTypeEnum BuffType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBuff_Interface.UpdateBuffEmitterLocationAndRotFx"));
    struct Params_UpdateBuffEmitterLocationAndRotFx {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        EEnemyBuffTypeEnum BuffType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_UpdateBuffEmitterLocationAndRotFx params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.BuffType = (EEnemyBuffTypeEnum)BuffType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyBuff_Interface::CreateBuffEmitterFx(EEnemyBuffTypeEnum BuffType, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBuff_Interface.CreateBuffEmitterFx"));
    struct Params_CreateBuffEmitterFx {
        EEnemyBuffTypeEnum BuffType; // 0x0
        char pad_1[0x3];
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateBuffEmitterFx params{};
    params.BuffType = (EEnemyBuffTypeEnum)BuffType;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyBuff_Interface::DestroyBuffEmitterFx(EEnemyBuffTypeEnum BuffType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBuff_Interface.DestroyBuffEmitterFx"));
    struct Params_DestroyBuffEmitterFx {
        EEnemyBuffTypeEnum BuffType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DestroyBuffEmitterFx params{};
    params.BuffType = (EEnemyBuffTypeEnum)BuffType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyBuff_Interface::DeactivateBuffEmitterFx(EEnemyBuffTypeEnum BuffType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBuff_Interface.DeactivateBuffEmitterFx"));
    struct Params_DeactivateBuffEmitterFx {
        EEnemyBuffTypeEnum BuffType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DeactivateBuffEmitterFx params{};
    params.BuffType = (EEnemyBuffTypeEnum)BuffType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
