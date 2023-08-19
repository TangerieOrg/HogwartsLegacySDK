#include "FActorByStat.hpp"
#include "FStatList.hpp"
#include "UActorProvider.hpp"
#include "UActor_ByStat.hpp"
UActor_ByStat* UActor_ByStat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_ByStat");
    return (UActor_ByStat*)res;
}
