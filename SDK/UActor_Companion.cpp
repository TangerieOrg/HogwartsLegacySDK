#include "UActorProvider.hpp"
#include "UActor_Companion.hpp"
UActor_Companion* UActor_Companion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_Companion");
    return (UActor_Companion*)res;
}
