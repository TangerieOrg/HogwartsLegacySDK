#include "UGoblin_AttackSpeedChoice.hpp"
#include "UNPC_MobilitySpeedChoice.hpp"
UGoblin_AttackSpeedChoice* UGoblin_AttackSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Goblin_AttackSpeedChoice");
    return (UGoblin_AttackSpeedChoice*)res;
}
