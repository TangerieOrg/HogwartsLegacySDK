#include "UNPC_MobilitySpeedChoice.hpp"
#include "UWolf_AttackSpeedChoice.hpp"
UWolf_AttackSpeedChoice* UWolf_AttackSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_AttackSpeedChoice");
    return (UWolf_AttackSpeedChoice*)res;
}
