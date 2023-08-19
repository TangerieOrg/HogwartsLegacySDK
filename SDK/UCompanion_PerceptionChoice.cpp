#include "UCompanion_PerceptionChoice.hpp"
#include "UEnemy_PerceptionChoice.hpp"
UCompanion_PerceptionChoice* UCompanion_PerceptionChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Companion_PerceptionChoice");
    return (UCompanion_PerceptionChoice*)res;
}
