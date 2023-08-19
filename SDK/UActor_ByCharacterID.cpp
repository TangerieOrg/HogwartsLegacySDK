#include "FSpawnSelectInfo.hpp"
#include "UActorProvider.hpp"
#include "UActor_ByCharacterID.hpp"
UActor_ByCharacterID* UActor_ByCharacterID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_ByCharacterID");
    return (UActor_ByCharacterID*)res;
}
