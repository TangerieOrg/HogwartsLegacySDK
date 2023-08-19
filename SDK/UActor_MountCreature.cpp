#include "UActorProvider.hpp"
#include "UActor_MountCreature.hpp"
#include "UClass.hpp"
UActor_MountCreature* UActor_MountCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_MountCreature");
    return (UActor_MountCreature*)res;
}
