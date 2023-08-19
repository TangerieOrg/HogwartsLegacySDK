#include "UActorProvider.hpp"
#include "UActor_CharactersWand.hpp"
UActor_CharactersWand* UActor_CharactersWand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_CharactersWand");
    return (UActor_CharactersWand*)res;
}
