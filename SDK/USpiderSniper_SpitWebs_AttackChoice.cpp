#include "UEnemy_AttackChoice.hpp"
#include "USpiderSniper_SpitWebs_AttackChoice.hpp"
USpiderSniper_SpitWebs_AttackChoice* USpiderSniper_SpitWebs_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderSniper_SpitWebs_AttackChoice");
    return (USpiderSniper_SpitWebs_AttackChoice*)res;
}
