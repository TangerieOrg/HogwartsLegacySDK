#include "UBTService_Creature_MissingNavmeshChecker.hpp"
#include "UBTService_MissingNavmeshChecker.hpp"
UBTService_Creature_MissingNavmeshChecker* UBTService_Creature_MissingNavmeshChecker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_MissingNavmeshChecker");
    return (UBTService_Creature_MissingNavmeshChecker*)res;
}
