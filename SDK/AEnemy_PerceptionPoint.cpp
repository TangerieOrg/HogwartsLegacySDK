#include "AEnemy_PerceptionPoint.hpp"
#include "APerceptionPoint.hpp"
#include "APerceptionPointArea.hpp"
#include "UFunction.hpp"
void AEnemy_PerceptionPoint::AddForceVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.AddForceVolume"));
    struct Params_AddForceVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_AddForceVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
AEnemy_PerceptionPoint* AEnemy_PerceptionPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_PerceptionPoint");
    return (AEnemy_PerceptionPoint*)res;
}
void AEnemy_PerceptionPoint::RemovePerceiveVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.RemovePerceiveVolume"));
    struct Params_RemovePerceiveVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_RemovePerceiveVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::RemoveLoseVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.RemoveLoseVolume"));
    struct Params_RemoveLoseVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveLoseVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::AddPerceiveVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.AddPerceiveVolume"));
    struct Params_AddPerceiveVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_AddPerceiveVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::RemoveForceVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.RemoveForceVolume"));
    struct Params_RemoveForceVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveForceVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::RemoveExcludeVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.RemoveExcludeVolume"));
    struct Params_RemoveExcludeVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveExcludeVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::AddLoseVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.AddLoseVolume"));
    struct Params_AddLoseVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_AddLoseVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
void AEnemy_PerceptionPoint::AddExcludeVolume(APerceptionPointArea* InAreaPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_PerceptionPoint.AddExcludeVolume"));
    struct Params_AddExcludeVolume {
        APerceptionPointArea* InAreaPtr; // 0x0
    }; // Size: 0x8
    Params_AddExcludeVolume params{};
    params.InAreaPtr = (APerceptionPointArea*)InAreaPtr;
    ProcessEvent(func, &params);
}
