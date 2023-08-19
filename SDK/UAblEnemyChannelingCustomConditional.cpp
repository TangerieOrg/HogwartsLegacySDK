#include "UAblChannelingBase.hpp"
#include "UAblEnemyChannelingCustomConditional.hpp"
#include "UClass.hpp"
UAblEnemyChannelingCustomConditional* UAblEnemyChannelingCustomConditional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyChannelingCustomConditional");
    return (UAblEnemyChannelingCustomConditional*)res;
}
