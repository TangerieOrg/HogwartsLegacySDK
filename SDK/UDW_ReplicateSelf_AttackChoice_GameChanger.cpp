#include "UDW_ReplicateSelf_AttackChoice_GameChanger.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_ReplicateSelf_AttackChoice_GameChanger* UDW_ReplicateSelf_AttackChoice_GameChanger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_ReplicateSelf_AttackChoice_GameChanger");
    return (UDW_ReplicateSelf_AttackChoice_GameChanger*)res;
}
