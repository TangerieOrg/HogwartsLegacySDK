#include "UActorProvider.hpp"
#include "UActor_TransfigurationObject.hpp"
UActor_TransfigurationObject* UActor_TransfigurationObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_TransfigurationObject");
    return (UActor_TransfigurationObject*)res;
}
