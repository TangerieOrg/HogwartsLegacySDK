#include "UActorProvider.hpp"
#include "UActor_DOVWithName.hpp"
UActor_DOVWithName* UActor_DOVWithName::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_DOVWithName");
    return (UActor_DOVWithName*)res;
}
