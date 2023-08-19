#include "UDW_RaiseDead_AttackChoice_GameChanger.hpp"
#include "UEnemyAIAttackData.hpp"
#include "USummonSpider_Backup_AttackChoice.hpp"
USummonSpider_Backup_AttackChoice* USummonSpider_Backup_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SummonSpider_Backup_AttackChoice");
    return (USummonSpider_Backup_AttackChoice*)res;
}
