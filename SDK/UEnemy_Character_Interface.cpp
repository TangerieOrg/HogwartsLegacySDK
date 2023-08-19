#include "UEnemy_Character_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UEnemy_Character_Interface* UEnemy_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Character_Interface");
    return (UEnemy_Character_Interface*)res;
}
void UEnemy_Character_Interface::MunitionCreated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.MunitionCreated"));
    struct Params_MunitionCreated {
    }; // Size: 0x0
    Params_MunitionCreated params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::EventTrackMeleePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.EventTrackMeleePoints"));
    struct Params_EventTrackMeleePoints {
    }; // Size: 0x0
    Params_EventTrackMeleePoints params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackWindowStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackWindowStart"));
    struct Params_AttackWindowStart {
    }; // Size: 0x0
    Params_AttackWindowStart params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackCollisionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackCollisionStart"));
    struct Params_AttackCollisionStart {
    }; // Size: 0x0
    Params_AttackCollisionStart params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackWindowStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackWindowStop"));
    struct Params_AttackWindowStop {
    }; // Size: 0x0
    Params_AttackWindowStop params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackLeftCollisionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackLeftCollisionStop"));
    struct Params_AttackLeftCollisionStop {
    }; // Size: 0x0
    Params_AttackLeftCollisionStop params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackLeftCollisionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackLeftCollisionStart"));
    struct Params_AttackLeftCollisionStart {
    }; // Size: 0x0
    Params_AttackLeftCollisionStart params{};
    ProcessEvent(func, &params);
}
void UEnemy_Character_Interface::AttackCollisionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character_Interface.AttackCollisionStop"));
    struct Params_AttackCollisionStop {
    }; // Size: 0x0
    Params_AttackCollisionStop params{};
    ProcessEvent(func, &params);
}
