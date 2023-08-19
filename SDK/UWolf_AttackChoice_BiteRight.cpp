#include "UEnemy_AttackChoice.hpp"
#include "UWolf_AttackChoice_BiteRight.hpp"
UWolf_AttackChoice_BiteRight* UWolf_AttackChoice_BiteRight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_AttackChoice_BiteRight");
    return (UWolf_AttackChoice_BiteRight*)res;
}
