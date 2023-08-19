#include "FDbSingleColumnInfo.hpp"
#include "UActorProvider.hpp"
#include "UActor_NamedCreature.hpp"
UActor_NamedCreature* UActor_NamedCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_NamedCreature");
    return (UActor_NamedCreature*)res;
}
