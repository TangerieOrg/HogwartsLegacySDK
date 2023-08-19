#include "UMultiplier_AttackSpeedChoice.hpp"
#include "UNPC_MobilitySpeedChoice.hpp"
UMultiplier_AttackSpeedChoice* UMultiplier_AttackSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Multiplier_AttackSpeedChoice");
    return (UMultiplier_AttackSpeedChoice*)res;
}
